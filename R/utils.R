
recycle_common <- function(...) {
  dots <- list(...)
  lengths <- vapply(dots, length, integer(1))
  non_constant_lengths <- unique(lengths[lengths != 1])
  if (length(non_constant_lengths) == 0) {
    final_length <- 1
  } else if(length(non_constant_lengths) == 1) {
    final_length <- non_constant_lengths
  } else {
    lengths_label <- paste0(non_constant_lengths, collapse = ", ")
    stop(sprintf("Incompatible lengths: %s", lengths_label), call. = FALSE)
  }

  lapply(dots, rep_len, final_length)
}

san_dbl <- function(x, nm = "x") {
  if (is.double(x)) {
    x
  } else if (is.integer(x)) {
    as.numeric(x)
  } else {
    stop(sprintf("Can't convert `%s` to double", nm), call. = FALSE)
  }
}
