
# Link here:
# http://www.teos-10.org/software.htm
curl::curl_download(
  "http://www.teos-10.org/software/GSW-C-3.05-4.zip",
  "data-raw/gsw.zip"
)

unzip("data-raw/gsw.zip", exdir = "data-raw")

gsw_dir <- list.files("data-raw", "^GSW-C", full.names = TRUE)
stopifnot(length(gsw_dir) == 1)



