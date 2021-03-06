#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

/* generated by data-raw/make-callentries.R */
extern SEXP teos10_c_gsw_adiabatic_lapse_rate_from_ct_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_adiabatic_lapse_rate_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_alpha_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_alpha_on_beta_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_alpha_wrt_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_alpha_wrt_t_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_beta_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_beta_const_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_c_from_sp_wrap(SEXP sp, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_cabbeling_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_chem_potential_water_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_chem_potential_water_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_cp_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_cp_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_ct_freezing_wrap(SEXP sa, SEXP p, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_ct_freezing_poly_wrap(SEXP sa, SEXP p, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_ct_from_enthalpy_wrap(SEXP sa, SEXP h, SEXP p);
extern SEXP teos10_c_gsw_ct_from_enthalpy_exact_wrap(SEXP sa, SEXP h, SEXP p);
extern SEXP teos10_c_gsw_ct_from_entropy_wrap(SEXP sa, SEXP entropy);
extern SEXP teos10_c_gsw_ct_from_pt_wrap(SEXP sa, SEXP pt);
extern SEXP teos10_c_gsw_ct_from_t_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_ct_maxdensity_wrap(SEXP sa, SEXP p);
extern SEXP teos10_c_gsw_deltasa_atlas_wrap(SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_deltasa_from_sp_wrap(SEXP sp, SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_dilution_coefficient_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_dynamic_enthalpy_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_enthalpy_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_enthalpy_ct_exact_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_enthalpy_diff_wrap(SEXP sa, SEXP ct, SEXP p_shallow, SEXP p_deep);
extern SEXP teos10_c_gsw_enthalpy_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_enthalpy_sso_0_wrap(SEXP p);
extern SEXP teos10_c_gsw_enthalpy_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_entropy_from_ct_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_entropy_from_pt_wrap(SEXP sa, SEXP pt);
extern SEXP teos10_c_gsw_entropy_from_t_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_entropy_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_entropy_part_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_entropy_part_zerop_wrap(SEXP sa, SEXP pt0);
extern SEXP teos10_c_gsw_fdelta_wrap(SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_gibbs_ice_part_t_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_gibbs_ice_pt0_wrap(SEXP pt0);
extern SEXP teos10_c_gsw_gibbs_ice_pt0_pt0_wrap(SEXP pt0);
extern SEXP teos10_c_gsw_gibbs_pt0_pt0_wrap(SEXP sa, SEXP pt0);
extern SEXP teos10_c_gsw_grav_wrap(SEXP lat, SEXP p);
extern SEXP teos10_c_gsw_helmholtz_energy_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_hill_ratio_at_sp2_wrap(SEXP t);
extern SEXP teos10_c_gsw_internal_energy_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_internal_energy_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_kappa_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_kappa_const_t_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_kappa_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_kappa_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_latentheat_evap_ct_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_latentheat_evap_t_wrap(SEXP sa, SEXP t);
extern SEXP teos10_c_gsw_latentheat_melting_wrap(SEXP sa, SEXP p);
extern SEXP teos10_c_gsw_melting_ice_equilibrium_sa_ct_ratio_wrap(SEXP sa, SEXP p);
extern SEXP teos10_c_gsw_melting_ice_equilibrium_sa_ct_ratio_poly_wrap(SEXP sa, SEXP p);
extern SEXP teos10_c_gsw_melting_ice_sa_ct_ratio_wrap(SEXP sa, SEXP ct, SEXP p, SEXP t_ih);
extern SEXP teos10_c_gsw_melting_ice_sa_ct_ratio_poly_wrap(SEXP sa, SEXP ct, SEXP p, SEXP t_ih);
extern SEXP teos10_c_gsw_melting_seaice_equilibrium_sa_ct_ratio_wrap(SEXP sa, SEXP p);
extern SEXP teos10_c_gsw_melting_seaice_equilibrium_sa_ct_ratio_poly_wrap(SEXP sa, SEXP p);
extern SEXP teos10_c_gsw_melting_seaice_sa_ct_ratio_wrap(SEXP sa, SEXP ct, SEXP p, SEXP sa_seaice, SEXP t_seaice);
extern SEXP teos10_c_gsw_melting_seaice_sa_ct_ratio_poly_wrap(SEXP sa, SEXP ct, SEXP p, SEXP sa_seaice, SEXP t_seaice);
extern SEXP teos10_c_gsw_p_from_z_wrap(SEXP z, SEXP lat);
extern SEXP teos10_c_gsw_pot_enthalpy_from_pt_ice_wrap(SEXP pt0_ice);
extern SEXP teos10_c_gsw_pot_enthalpy_from_pt_ice_poly_wrap(SEXP pt0_ice);
extern SEXP teos10_c_gsw_pot_enthalpy_ice_freezing_wrap(SEXP sa, SEXP p);
extern SEXP teos10_c_gsw_pot_enthalpy_ice_freezing_poly_wrap(SEXP sa, SEXP p);
extern SEXP teos10_c_gsw_pot_rho_t_exact_wrap(SEXP sa, SEXP t, SEXP p, SEXP p_ref);
extern SEXP teos10_c_gsw_pressure_coefficient_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_pressure_freezing_ct_wrap(SEXP sa, SEXP ct, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_pt_from_ct_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_pt_from_entropy_wrap(SEXP sa, SEXP entropy);
extern SEXP teos10_c_gsw_pt_from_pot_enthalpy_ice_wrap(SEXP pot_enthalpy_ice);
extern SEXP teos10_c_gsw_pt_from_pot_enthalpy_ice_poly_wrap(SEXP pot_enthalpy_ice);
extern SEXP teos10_c_gsw_pt_from_pot_enthalpy_ice_poly_dh_wrap(SEXP pot_enthalpy_ice);
extern SEXP teos10_c_gsw_pt_from_t_wrap(SEXP sa, SEXP t, SEXP p, SEXP p_ref);
extern SEXP teos10_c_gsw_pt_from_t_ice_wrap(SEXP t, SEXP p, SEXP p_ref);
extern SEXP teos10_c_gsw_pt0_cold_ice_poly_wrap(SEXP pot_enthalpy_ice);
extern SEXP teos10_c_gsw_pt0_from_t_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_pt0_from_t_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_rho_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_rho_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_rho_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_sa_freezing_from_ct_wrap(SEXP ct, SEXP p, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_sa_freezing_from_ct_poly_wrap(SEXP ct, SEXP p, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_sa_freezing_from_t_wrap(SEXP t, SEXP p, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_sa_freezing_from_t_poly_wrap(SEXP t, SEXP p, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_sa_from_rho_wrap(SEXP rho, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_sa_from_sp_wrap(SEXP sp, SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_sa_from_sp_baltic_wrap(SEXP sp, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_sa_from_sstar_wrap(SEXP sstar, SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_saar_wrap(SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_sigma0_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_sigma1_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_sigma2_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_sigma3_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_sigma4_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_sound_speed_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_sound_speed_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_sound_speed_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_sp_from_c_wrap(SEXP c, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_sp_from_sa_wrap(SEXP sa, SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_sp_from_sa_baltic_wrap(SEXP sa, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_sp_from_sk_wrap(SEXP sk);
extern SEXP teos10_c_gsw_sp_from_sr_wrap(SEXP sr);
extern SEXP teos10_c_gsw_sp_from_sstar_wrap(SEXP sstar, SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_specvol_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_specvol_anom_standard_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_specvol_ice_wrap(SEXP t, SEXP p);
extern SEXP teos10_c_gsw_specvol_sso_0_wrap(SEXP p);
extern SEXP teos10_c_gsw_specvol_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_spiciness0_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_spiciness1_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_spiciness2_wrap(SEXP sa, SEXP ct);
extern SEXP teos10_c_gsw_sr_from_sp_wrap(SEXP sp);
extern SEXP teos10_c_gsw_sstar_from_sa_wrap(SEXP sa, SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_sstar_from_sp_wrap(SEXP sp, SEXP p, SEXP lon, SEXP lat);
extern SEXP teos10_c_gsw_t_deriv_chem_potential_water_t_exact_wrap(SEXP sa, SEXP t, SEXP p);
extern SEXP teos10_c_gsw_t_freezing_wrap(SEXP sa, SEXP p, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_t_freezing_poly_wrap(SEXP sa, SEXP p, SEXP saturation_fraction);
extern SEXP teos10_c_gsw_t_from_ct_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_t_from_pt0_ice_wrap(SEXP pt0_ice, SEXP p);
extern SEXP teos10_c_gsw_thermobaric_wrap(SEXP sa, SEXP ct, SEXP p);
extern SEXP teos10_c_gsw_z_from_p_wrap(SEXP p, SEXP lat);
static const R_CallMethodDef CallEntries[] = {
    {"teos10_c_gsw_adiabatic_lapse_rate_from_ct_wrap", (DL_FUNC) &teos10_c_gsw_adiabatic_lapse_rate_from_ct_wrap, 3},
    {"teos10_c_gsw_adiabatic_lapse_rate_ice_wrap", (DL_FUNC) &teos10_c_gsw_adiabatic_lapse_rate_ice_wrap, 2},
    {"teos10_c_gsw_alpha_wrap", (DL_FUNC) &teos10_c_gsw_alpha_wrap, 3},
    {"teos10_c_gsw_alpha_on_beta_wrap", (DL_FUNC) &teos10_c_gsw_alpha_on_beta_wrap, 3},
    {"teos10_c_gsw_alpha_wrt_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_alpha_wrt_t_exact_wrap, 3},
    {"teos10_c_gsw_alpha_wrt_t_ice_wrap", (DL_FUNC) &teos10_c_gsw_alpha_wrt_t_ice_wrap, 2},
    {"teos10_c_gsw_beta_wrap", (DL_FUNC) &teos10_c_gsw_beta_wrap, 3},
    {"teos10_c_gsw_beta_const_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_beta_const_t_exact_wrap, 3},
    {"teos10_c_gsw_c_from_sp_wrap", (DL_FUNC) &teos10_c_gsw_c_from_sp_wrap, 3},
    {"teos10_c_gsw_cabbeling_wrap", (DL_FUNC) &teos10_c_gsw_cabbeling_wrap, 3},
    {"teos10_c_gsw_chem_potential_water_ice_wrap", (DL_FUNC) &teos10_c_gsw_chem_potential_water_ice_wrap, 2},
    {"teos10_c_gsw_chem_potential_water_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_chem_potential_water_t_exact_wrap, 3},
    {"teos10_c_gsw_cp_ice_wrap", (DL_FUNC) &teos10_c_gsw_cp_ice_wrap, 2},
    {"teos10_c_gsw_cp_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_cp_t_exact_wrap, 3},
    {"teos10_c_gsw_ct_freezing_wrap", (DL_FUNC) &teos10_c_gsw_ct_freezing_wrap, 3},
    {"teos10_c_gsw_ct_freezing_poly_wrap", (DL_FUNC) &teos10_c_gsw_ct_freezing_poly_wrap, 3},
    {"teos10_c_gsw_ct_from_enthalpy_wrap", (DL_FUNC) &teos10_c_gsw_ct_from_enthalpy_wrap, 3},
    {"teos10_c_gsw_ct_from_enthalpy_exact_wrap", (DL_FUNC) &teos10_c_gsw_ct_from_enthalpy_exact_wrap, 3},
    {"teos10_c_gsw_ct_from_entropy_wrap", (DL_FUNC) &teos10_c_gsw_ct_from_entropy_wrap, 2},
    {"teos10_c_gsw_ct_from_pt_wrap", (DL_FUNC) &teos10_c_gsw_ct_from_pt_wrap, 2},
    {"teos10_c_gsw_ct_from_t_wrap", (DL_FUNC) &teos10_c_gsw_ct_from_t_wrap, 3},
    {"teos10_c_gsw_ct_maxdensity_wrap", (DL_FUNC) &teos10_c_gsw_ct_maxdensity_wrap, 2},
    {"teos10_c_gsw_deltasa_atlas_wrap", (DL_FUNC) &teos10_c_gsw_deltasa_atlas_wrap, 3},
    {"teos10_c_gsw_deltasa_from_sp_wrap", (DL_FUNC) &teos10_c_gsw_deltasa_from_sp_wrap, 4},
    {"teos10_c_gsw_dilution_coefficient_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_dilution_coefficient_t_exact_wrap, 3},
    {"teos10_c_gsw_dynamic_enthalpy_wrap", (DL_FUNC) &teos10_c_gsw_dynamic_enthalpy_wrap, 3},
    {"teos10_c_gsw_enthalpy_wrap", (DL_FUNC) &teos10_c_gsw_enthalpy_wrap, 3},
    {"teos10_c_gsw_enthalpy_ct_exact_wrap", (DL_FUNC) &teos10_c_gsw_enthalpy_ct_exact_wrap, 3},
    {"teos10_c_gsw_enthalpy_diff_wrap", (DL_FUNC) &teos10_c_gsw_enthalpy_diff_wrap, 4},
    {"teos10_c_gsw_enthalpy_ice_wrap", (DL_FUNC) &teos10_c_gsw_enthalpy_ice_wrap, 2},
    {"teos10_c_gsw_enthalpy_sso_0_wrap", (DL_FUNC) &teos10_c_gsw_enthalpy_sso_0_wrap, 1},
    {"teos10_c_gsw_enthalpy_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_enthalpy_t_exact_wrap, 3},
    {"teos10_c_gsw_entropy_from_ct_wrap", (DL_FUNC) &teos10_c_gsw_entropy_from_ct_wrap, 2},
    {"teos10_c_gsw_entropy_from_pt_wrap", (DL_FUNC) &teos10_c_gsw_entropy_from_pt_wrap, 2},
    {"teos10_c_gsw_entropy_from_t_wrap", (DL_FUNC) &teos10_c_gsw_entropy_from_t_wrap, 3},
    {"teos10_c_gsw_entropy_ice_wrap", (DL_FUNC) &teos10_c_gsw_entropy_ice_wrap, 2},
    {"teos10_c_gsw_entropy_part_wrap", (DL_FUNC) &teos10_c_gsw_entropy_part_wrap, 3},
    {"teos10_c_gsw_entropy_part_zerop_wrap", (DL_FUNC) &teos10_c_gsw_entropy_part_zerop_wrap, 2},
    {"teos10_c_gsw_fdelta_wrap", (DL_FUNC) &teos10_c_gsw_fdelta_wrap, 3},
    {"teos10_c_gsw_gibbs_ice_part_t_wrap", (DL_FUNC) &teos10_c_gsw_gibbs_ice_part_t_wrap, 2},
    {"teos10_c_gsw_gibbs_ice_pt0_wrap", (DL_FUNC) &teos10_c_gsw_gibbs_ice_pt0_wrap, 1},
    {"teos10_c_gsw_gibbs_ice_pt0_pt0_wrap", (DL_FUNC) &teos10_c_gsw_gibbs_ice_pt0_pt0_wrap, 1},
    {"teos10_c_gsw_gibbs_pt0_pt0_wrap", (DL_FUNC) &teos10_c_gsw_gibbs_pt0_pt0_wrap, 2},
    {"teos10_c_gsw_grav_wrap", (DL_FUNC) &teos10_c_gsw_grav_wrap, 2},
    {"teos10_c_gsw_helmholtz_energy_ice_wrap", (DL_FUNC) &teos10_c_gsw_helmholtz_energy_ice_wrap, 2},
    {"teos10_c_gsw_hill_ratio_at_sp2_wrap", (DL_FUNC) &teos10_c_gsw_hill_ratio_at_sp2_wrap, 1},
    {"teos10_c_gsw_internal_energy_wrap", (DL_FUNC) &teos10_c_gsw_internal_energy_wrap, 3},
    {"teos10_c_gsw_internal_energy_ice_wrap", (DL_FUNC) &teos10_c_gsw_internal_energy_ice_wrap, 2},
    {"teos10_c_gsw_kappa_wrap", (DL_FUNC) &teos10_c_gsw_kappa_wrap, 3},
    {"teos10_c_gsw_kappa_const_t_ice_wrap", (DL_FUNC) &teos10_c_gsw_kappa_const_t_ice_wrap, 2},
    {"teos10_c_gsw_kappa_ice_wrap", (DL_FUNC) &teos10_c_gsw_kappa_ice_wrap, 2},
    {"teos10_c_gsw_kappa_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_kappa_t_exact_wrap, 3},
    {"teos10_c_gsw_latentheat_evap_ct_wrap", (DL_FUNC) &teos10_c_gsw_latentheat_evap_ct_wrap, 2},
    {"teos10_c_gsw_latentheat_evap_t_wrap", (DL_FUNC) &teos10_c_gsw_latentheat_evap_t_wrap, 2},
    {"teos10_c_gsw_latentheat_melting_wrap", (DL_FUNC) &teos10_c_gsw_latentheat_melting_wrap, 2},
    {"teos10_c_gsw_melting_ice_equilibrium_sa_ct_ratio_wrap", (DL_FUNC) &teos10_c_gsw_melting_ice_equilibrium_sa_ct_ratio_wrap, 2},
    {"teos10_c_gsw_melting_ice_equilibrium_sa_ct_ratio_poly_wrap", (DL_FUNC) &teos10_c_gsw_melting_ice_equilibrium_sa_ct_ratio_poly_wrap, 2},
    {"teos10_c_gsw_melting_ice_sa_ct_ratio_wrap", (DL_FUNC) &teos10_c_gsw_melting_ice_sa_ct_ratio_wrap, 4},
    {"teos10_c_gsw_melting_ice_sa_ct_ratio_poly_wrap", (DL_FUNC) &teos10_c_gsw_melting_ice_sa_ct_ratio_poly_wrap, 4},
    {"teos10_c_gsw_melting_seaice_equilibrium_sa_ct_ratio_wrap", (DL_FUNC) &teos10_c_gsw_melting_seaice_equilibrium_sa_ct_ratio_wrap, 2},
    {"teos10_c_gsw_melting_seaice_equilibrium_sa_ct_ratio_poly_wrap", (DL_FUNC) &teos10_c_gsw_melting_seaice_equilibrium_sa_ct_ratio_poly_wrap, 2},
    {"teos10_c_gsw_melting_seaice_sa_ct_ratio_wrap", (DL_FUNC) &teos10_c_gsw_melting_seaice_sa_ct_ratio_wrap, 5},
    {"teos10_c_gsw_melting_seaice_sa_ct_ratio_poly_wrap", (DL_FUNC) &teos10_c_gsw_melting_seaice_sa_ct_ratio_poly_wrap, 5},
    {"teos10_c_gsw_p_from_z_wrap", (DL_FUNC) &teos10_c_gsw_p_from_z_wrap, 2},
    {"teos10_c_gsw_pot_enthalpy_from_pt_ice_wrap", (DL_FUNC) &teos10_c_gsw_pot_enthalpy_from_pt_ice_wrap, 1},
    {"teos10_c_gsw_pot_enthalpy_from_pt_ice_poly_wrap", (DL_FUNC) &teos10_c_gsw_pot_enthalpy_from_pt_ice_poly_wrap, 1},
    {"teos10_c_gsw_pot_enthalpy_ice_freezing_wrap", (DL_FUNC) &teos10_c_gsw_pot_enthalpy_ice_freezing_wrap, 2},
    {"teos10_c_gsw_pot_enthalpy_ice_freezing_poly_wrap", (DL_FUNC) &teos10_c_gsw_pot_enthalpy_ice_freezing_poly_wrap, 2},
    {"teos10_c_gsw_pot_rho_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_pot_rho_t_exact_wrap, 4},
    {"teos10_c_gsw_pressure_coefficient_ice_wrap", (DL_FUNC) &teos10_c_gsw_pressure_coefficient_ice_wrap, 2},
    {"teos10_c_gsw_pressure_freezing_ct_wrap", (DL_FUNC) &teos10_c_gsw_pressure_freezing_ct_wrap, 3},
    {"teos10_c_gsw_pt_from_ct_wrap", (DL_FUNC) &teos10_c_gsw_pt_from_ct_wrap, 2},
    {"teos10_c_gsw_pt_from_entropy_wrap", (DL_FUNC) &teos10_c_gsw_pt_from_entropy_wrap, 2},
    {"teos10_c_gsw_pt_from_pot_enthalpy_ice_wrap", (DL_FUNC) &teos10_c_gsw_pt_from_pot_enthalpy_ice_wrap, 1},
    {"teos10_c_gsw_pt_from_pot_enthalpy_ice_poly_wrap", (DL_FUNC) &teos10_c_gsw_pt_from_pot_enthalpy_ice_poly_wrap, 1},
    {"teos10_c_gsw_pt_from_pot_enthalpy_ice_poly_dh_wrap", (DL_FUNC) &teos10_c_gsw_pt_from_pot_enthalpy_ice_poly_dh_wrap, 1},
    {"teos10_c_gsw_pt_from_t_wrap", (DL_FUNC) &teos10_c_gsw_pt_from_t_wrap, 4},
    {"teos10_c_gsw_pt_from_t_ice_wrap", (DL_FUNC) &teos10_c_gsw_pt_from_t_ice_wrap, 3},
    {"teos10_c_gsw_pt0_cold_ice_poly_wrap", (DL_FUNC) &teos10_c_gsw_pt0_cold_ice_poly_wrap, 1},
    {"teos10_c_gsw_pt0_from_t_wrap", (DL_FUNC) &teos10_c_gsw_pt0_from_t_wrap, 3},
    {"teos10_c_gsw_pt0_from_t_ice_wrap", (DL_FUNC) &teos10_c_gsw_pt0_from_t_ice_wrap, 2},
    {"teos10_c_gsw_rho_wrap", (DL_FUNC) &teos10_c_gsw_rho_wrap, 3},
    {"teos10_c_gsw_rho_ice_wrap", (DL_FUNC) &teos10_c_gsw_rho_ice_wrap, 2},
    {"teos10_c_gsw_rho_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_rho_t_exact_wrap, 3},
    {"teos10_c_gsw_sa_freezing_from_ct_wrap", (DL_FUNC) &teos10_c_gsw_sa_freezing_from_ct_wrap, 3},
    {"teos10_c_gsw_sa_freezing_from_ct_poly_wrap", (DL_FUNC) &teos10_c_gsw_sa_freezing_from_ct_poly_wrap, 3},
    {"teos10_c_gsw_sa_freezing_from_t_wrap", (DL_FUNC) &teos10_c_gsw_sa_freezing_from_t_wrap, 3},
    {"teos10_c_gsw_sa_freezing_from_t_poly_wrap", (DL_FUNC) &teos10_c_gsw_sa_freezing_from_t_poly_wrap, 3},
    {"teos10_c_gsw_sa_from_rho_wrap", (DL_FUNC) &teos10_c_gsw_sa_from_rho_wrap, 3},
    {"teos10_c_gsw_sa_from_sp_wrap", (DL_FUNC) &teos10_c_gsw_sa_from_sp_wrap, 4},
    {"teos10_c_gsw_sa_from_sp_baltic_wrap", (DL_FUNC) &teos10_c_gsw_sa_from_sp_baltic_wrap, 3},
    {"teos10_c_gsw_sa_from_sstar_wrap", (DL_FUNC) &teos10_c_gsw_sa_from_sstar_wrap, 4},
    {"teos10_c_gsw_saar_wrap", (DL_FUNC) &teos10_c_gsw_saar_wrap, 3},
    {"teos10_c_gsw_sigma0_wrap", (DL_FUNC) &teos10_c_gsw_sigma0_wrap, 2},
    {"teos10_c_gsw_sigma1_wrap", (DL_FUNC) &teos10_c_gsw_sigma1_wrap, 2},
    {"teos10_c_gsw_sigma2_wrap", (DL_FUNC) &teos10_c_gsw_sigma2_wrap, 2},
    {"teos10_c_gsw_sigma3_wrap", (DL_FUNC) &teos10_c_gsw_sigma3_wrap, 2},
    {"teos10_c_gsw_sigma4_wrap", (DL_FUNC) &teos10_c_gsw_sigma4_wrap, 2},
    {"teos10_c_gsw_sound_speed_wrap", (DL_FUNC) &teos10_c_gsw_sound_speed_wrap, 3},
    {"teos10_c_gsw_sound_speed_ice_wrap", (DL_FUNC) &teos10_c_gsw_sound_speed_ice_wrap, 2},
    {"teos10_c_gsw_sound_speed_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_sound_speed_t_exact_wrap, 3},
    {"teos10_c_gsw_sp_from_c_wrap", (DL_FUNC) &teos10_c_gsw_sp_from_c_wrap, 3},
    {"teos10_c_gsw_sp_from_sa_wrap", (DL_FUNC) &teos10_c_gsw_sp_from_sa_wrap, 4},
    {"teos10_c_gsw_sp_from_sa_baltic_wrap", (DL_FUNC) &teos10_c_gsw_sp_from_sa_baltic_wrap, 3},
    {"teos10_c_gsw_sp_from_sk_wrap", (DL_FUNC) &teos10_c_gsw_sp_from_sk_wrap, 1},
    {"teos10_c_gsw_sp_from_sr_wrap", (DL_FUNC) &teos10_c_gsw_sp_from_sr_wrap, 1},
    {"teos10_c_gsw_sp_from_sstar_wrap", (DL_FUNC) &teos10_c_gsw_sp_from_sstar_wrap, 4},
    {"teos10_c_gsw_specvol_wrap", (DL_FUNC) &teos10_c_gsw_specvol_wrap, 3},
    {"teos10_c_gsw_specvol_anom_standard_wrap", (DL_FUNC) &teos10_c_gsw_specvol_anom_standard_wrap, 3},
    {"teos10_c_gsw_specvol_ice_wrap", (DL_FUNC) &teos10_c_gsw_specvol_ice_wrap, 2},
    {"teos10_c_gsw_specvol_sso_0_wrap", (DL_FUNC) &teos10_c_gsw_specvol_sso_0_wrap, 1},
    {"teos10_c_gsw_specvol_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_specvol_t_exact_wrap, 3},
    {"teos10_c_gsw_spiciness0_wrap", (DL_FUNC) &teos10_c_gsw_spiciness0_wrap, 2},
    {"teos10_c_gsw_spiciness1_wrap", (DL_FUNC) &teos10_c_gsw_spiciness1_wrap, 2},
    {"teos10_c_gsw_spiciness2_wrap", (DL_FUNC) &teos10_c_gsw_spiciness2_wrap, 2},
    {"teos10_c_gsw_sr_from_sp_wrap", (DL_FUNC) &teos10_c_gsw_sr_from_sp_wrap, 1},
    {"teos10_c_gsw_sstar_from_sa_wrap", (DL_FUNC) &teos10_c_gsw_sstar_from_sa_wrap, 4},
    {"teos10_c_gsw_sstar_from_sp_wrap", (DL_FUNC) &teos10_c_gsw_sstar_from_sp_wrap, 4},
    {"teos10_c_gsw_t_deriv_chem_potential_water_t_exact_wrap", (DL_FUNC) &teos10_c_gsw_t_deriv_chem_potential_water_t_exact_wrap, 3},
    {"teos10_c_gsw_t_freezing_wrap", (DL_FUNC) &teos10_c_gsw_t_freezing_wrap, 3},
    {"teos10_c_gsw_t_freezing_poly_wrap", (DL_FUNC) &teos10_c_gsw_t_freezing_poly_wrap, 3},
    {"teos10_c_gsw_t_from_ct_wrap", (DL_FUNC) &teos10_c_gsw_t_from_ct_wrap, 3},
    {"teos10_c_gsw_t_from_pt0_ice_wrap", (DL_FUNC) &teos10_c_gsw_t_from_pt0_ice_wrap, 2},
    {"teos10_c_gsw_thermobaric_wrap", (DL_FUNC) &teos10_c_gsw_thermobaric_wrap, 3},
    {"teos10_c_gsw_z_from_p_wrap", (DL_FUNC) &teos10_c_gsw_z_from_p_wrap, 2},
    {NULL, NULL, 0}
};
/* end generated by data-raw/make-callentries.R */

void R_init_teos10(DllInfo* dll){
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
