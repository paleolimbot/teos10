% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/teos10-wrappers.R
\name{gsw_melting_ice_equilibrium_sa_ct_ratio_poly}
\alias{gsw_melting_ice_equilibrium_sa_ct_ratio_poly}
\title{gsw_melting_ice_equilibrium_sa_ct_ratio_poly}
\usage{
gsw_melting_ice_equilibrium_sa_ct_ratio_poly(sa, p)
}
\arguments{
\item{sa}{Absolute Salinity \verb{[ g/kg ]}}

\item{p}{sea pressure \verb{[ dbar ]}}
}
\description{
Calculates the ratio of SA to CT changes when ice melts into seawater
with both the seawater and the seaice temperatures being almost equal to
the equilibrium freezing temperature.  It is assumed that a small mass
of ice melts into an infinite mass of seawater.  If indeed the
temperature of the seawater and the ice were both equal to the freezing
temperature, then no melting or freezing would occur an imbalance
between these three temperatures is needed for freezing or melting to
occur (the three temperatures being (1) the seawater temperature,
(2) the ice temperature, and (3) the freezing temperature.
The output, melting_ice_equilibrium_SA_CT_ratio, is dSA/dCT rather than
dCT/dSA.  This is done so that when SA = 0, the output, dSA/dCT is zero
whereas dCT/dSA would be infinite.
}
\seealso{
\href{http://www.teos-10.org/pubs/gsw/html/gsw_melting_ice_equilibrium_sa_ct_ratio_poly.html}{Official TEOS-10 documentation for \code{gsw_melting_ice_equilibrium_sa_ct_ratio_poly()}}
}
