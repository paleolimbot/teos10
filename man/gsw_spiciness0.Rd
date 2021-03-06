% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/teos10-wrappers.R
\name{gsw_spiciness0}
\alias{gsw_spiciness0}
\title{gsw_spiciness0}
\usage{
gsw_spiciness0(sa, ct)
}
\arguments{
\item{sa}{Absolute Salinity \verb{[ g/kg ]}}

\item{ct}{Conservative Temperature \verb{[deg C]}}
}
\description{
Calculates spiciness from Absolute Salinity and Conservative
Temperature at a pressure of 0 dbar, as described by McDougall and
Krzysik (2015).  This routine is based on the computationally-efficient
expression for specific volume in terms of SA, CT and p (Roquet et al.,
2015).
}
\seealso{
\href{http://www.teos-10.org/pubs/gsw/html/gsw_spiciness0.html}{Official TEOS-10 documentation for \code{gsw_spiciness0()}}
}
