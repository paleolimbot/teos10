
# Link here:
# http://www.teos-10.org/software.htm
curl::curl_download(
  "http://www.teos-10.org/software/GSW-C-3.05-4.zip",
  "data-raw/gsw.zip"
)

unzip("data-raw/gsw.zip", exdir = "data-raw")

gsw_dir <- list.files("data-raw", "^GSW-C", full.names = TRUE)
stopifnot(length(gsw_dir) == 1)

# clear previous gsw_ files from src/, copy files
unlink(list.files("src", "^gsw", full.names = TRUE))

stopifnot(
  file.copy(
    file.path(gsw_dir, c("gswteos-10.h", "gsw_internal_const.h", "gsw_saar.c", "gsw_saar_data.c", "gsw_oceanographic_toolbox.c")),
    "src"
  )
)
