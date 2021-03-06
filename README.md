
<!-- README.md is generated from README.Rmd. Please edit that file -->

# teos10

<!-- badges: start -->

[![R-CMD-check](https://github.com/paleolimbot/teos10/workflows/R-CMD-check/badge.svg)](https://github.com/paleolimbot/teos10/actions)
[![Lifecycle:
experimental](https://img.shields.io/badge/lifecycle-experimental-orange.svg)](https://lifecycle.r-lib.org/articles/stages.html#experimental)
[![Codecov test
coverage](https://codecov.io/gh/paleolimbot/teos10/branch/master/graph/badge.svg)](https://codecov.io/gh/paleolimbot/teos10?branch=master)
<!-- badges: end -->

The goal of teos10 is to learn about GSW and see if it can be wrapped in
an almost entirely automated fashion.

## Installation

You can install the development version from
[GitHub](https://github.com/) with:

``` r
# install.packages("devtools")
devtools::install_github("paleolimbot/teos10")
```

## Example

This is a basic example which shows you how to solve a common problem:

``` r
library(teos10)
lat <- c(-90, -60, -30, 0)
p <- 0
gsw_grav(lat, p)
#> [1] 9.832186 9.819179 9.793249 9.780327
```
