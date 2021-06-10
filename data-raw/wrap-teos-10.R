
library(tidyverse)

gsw_head <- "src/gswteos-10.h"
gsw_head_text <- read_file(gsw_head)

functions_raw <- gsw_head_text %>%
  str_match_all(
    regex(
      "extern\\s+(double|int|void)\\s+(gsw_[a-zA-Z0-9_]+)\\(([^\\(]*)\\)\\s*;",
      multiline = TRUE
    )
  ) %>%
  .[[1]] %>%
  as.data.frame() %>%
  set_names(c("signature", "return_type", "name", "args")) %>%
  as_tibble()

args_raw <- functions_raw %>%
  select(return_type, name, args) %>%
  separate_rows(args, sep = "\\s*,") %>%
  extract(args, c("arg_type", "arg_name"), "([a-z_]+ ?\\*?)(.*?)\\s*$") %>%
  mutate(
    arg_name = str_trim(arg_name),
    arg_type = str_trim(arg_type) %>%
      str_replace("\\s*\\*", "*")
  ) %>%
  group_by(name) %>%
  mutate(arg_pos = 1:n()) %>%
  ungroup()

functions <- args_raw %>%
  group_by(name) %>%
  summarise(
    n_args = n(),
    signature = paste0(paste(arg_type, collapse = ", "), " => ", return_type[1])
  )

args <- args_raw %>%
  select(-return_type)
