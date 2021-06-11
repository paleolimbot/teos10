
library(tidyverse)

# scrape documentation from the .c source
functions_doc_raw <- paste(
  read_file("src/gsw_oceanographic_toolbox.c"),
  read_file("src/gsw_saar.c"),
  sep = "\n\n"
) %>%

  str_match_all(
    regex(
      "(\\s*!\\s*==.*?\\*/)\\s*(double|int|void)\\s+([^\\(]+)",
      dotall = TRUE, multiline = TRUE
    )
  ) %>%
  .[[1]] %>%
  as.data.frame() %>%
  set_names(c("match", "doc_raw", "return_type", "name")) %>%
  as_tibble() %>%
  select(-match, -return_type) %>%
  mutate(
    name = str_trim(name) %>%
      str_remove("\\*\\s*")
  )

doc <- functions_doc_raw %>%
  mutate(
    params_raw = str_extract(
      doc_raw,
      regex(
        "!\\s+[A-Za-z0-9_]+\\s+[=:]\\s+.*?(!-{3,}|\\*/)",
        dotall = TRUE, multiline = TRUE
      )
    ) %>%
      replace(., is.na(.), "NO PARAMS"),
    desc = str_remove(
      doc_raw, fixed(params_raw)
    ) %>%
      str_remove(regex("^.*?={5,}", multiline = TRUE, dotall = TRUE)) %>%
      str_remove(regex("^.*?={5,}", multiline = TRUE, dotall = TRUE)) %>%
      str_remove_all("!\\s+") %>%
      str_remove("\\*/\\s*$") %>%
      str_trim()
  )

# A little easier to manage these by hand than to scrape params
# because some of them spill over on to multiple lines
# Luckily, the names and units are consistent between functions
teos10_params <- c(
  sa  = "Absolute Salinity [ g/kg ]",
  ct  = "Conservative Temperature [deg C]",
  p  = "sea pressure [ dbar ]",
  t  = " in-situ temperature (ITS-90) [ deg C ]",
  sp  = "Practical Salinity [ unitless ]",
  saturation_fraction  = "the saturation fraction of dissolved air in seawater",
  h  = " specific enthalpy [ J/kg ]",
  entropy  = "specific entropy [ deg C ]",
  pt  = "potential temperature with reference pressure of 0 dbar [ deg C ]",
  lon  = "longitude [ deg E ]",
  lat  = "latitude [ deg N ]",
  p_shallow  = "upper sea pressure (i.e. shallower absolute pressure - 10.1325 dbar) [ dbar ]",
  p_deep  = "lower sea pressure (i.e. deeper absolute pressure - 10.1325 dbar) [ dbar ]",
  pt0  = "insitu temperature [ deg C ]",
  t_ih  = "in-situ temperature of the ice at pressure p (ITS-90) [ deg C ]",
  sa_seaice  = "Absolute Salinity of sea ice, that is, the mass fraction of salt in sea ice, expressed in g of salt per kg of sea ice. [ g/kg ]",
  t_seaice  = "the in-situ temperature of the sea ice (or ice) (ITS-90) [ deg C ]",
  z  = "height [ m ]",
  pt0_ice  = "potential temperature of ice (ITS-90) [ deg C ]",
  p_ref  = "reference sea pressure [ dbar ]",
  pot_enthalpy_ice  = "potential enthalpy of ice [ J/kg ]",
  rho  = "in-situ density	[ kg/m ]",
  sstar  = "Preformed Salinity [ g/kg ]",
  c  = "conductivity [ mS/cm ]",
  sk  = "Knudsen Salinity [ parts per thousand, ppt ]",
  sr  = " Reference Salinity [ g/kg ]"
)

doc %>%
  select(name, desc) %>%
  write_csv("data-raw/teos-10-doc.csv")

teos10_params %>%
  enframe("arg_name", "arg_doc") %>%
  write_csv("data-raw/teos-10-doc-arg.csv")

