#ifndef _NEGF_H
#define _NEGF_H

/**************************************************************************** 
 *
 *  C bindings for LibNEGF 
 *
 *  Generated by bind_fortran (DO NOT EDIT MANUALLY)
 *
 ****************************************************************************/


#define NEGF_SC  100
#define NEGF_MC  200
#define NEGF_LC  500
#define NEGF_HSIZE 4
#define NEGF_PADCHAR ' '

#include "lnParams.h"

void negf_gethandlersize(int *handlerSize);
/* integer(c_int), intent(out), intent(out) :: handlerSize  */

void negf_init_session(int *handler);
/* integer(c_int), intent(out) :: handler(DAC_handlerSize)  */

void negf_get_version(int *handler);
/* integer(c_int), intent(inout) :: handler(DAC_handlerSize)  */

void negf_init(int *handler);
/* integer(c_int), intent(inout), intent(inout) :: handler(DAC_handlerSize)  */

void negf_init_structure(int *handler, int ncont, int *surfstart, int *surfend, 
    int *contend, int npl, int *plend, int *cblk);
/* integer(c_int), intent(inout), intent(inout) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), value, intent(inout) :: ncont
   integer(c_int), intent(in), intent(inout) :: surfstart(*)
   integer(c_int), intent(in), intent(inout) :: surfend(*)
   integer(c_int), intent(in), intent(inout) :: contend(*)
   integer(c_int), intent(in), value, intent(inout) :: npl
   integer(c_int), intent(in), intent(inout) :: plend(*)
   integer(c_int), intent(in), intent(inout) :: cblk(*)  */

void negf_get_pls(const int *handler, const int *npl, const int *ncont, const 
    int *plend, const int *cblk, const int copy);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(out), intent(in) :: npl
   integer(c_int), intent(out), intent(in) :: ncont
   integer(c_int), intent(out), intent(in) :: plend(*)
   integer(c_int), intent(out), intent(in) :: cblk(*)
   integer(c_int), intent(in), value, intent(in) :: copy  */

void negf_init_contacts(int *handler, int ncont);
/* integer(c_int), intent(inout), intent(inout) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), value, intent(inout) :: ncont  */

void negf_set_params(int *handler, struct lnparams *params);
/* integer(c_int), intent(inout), intent(inout) :: handler(DAC_handlerSize)
   type(lnparams), intent(in), intent(inout) :: params  */

void negf_get_params(int *handler, struct lnparams *params);
/* integer(c_int), intent(inout), intent(inout) :: handler(DAC_handlerSize)
   type(lnparams), intent(inout), intent(inout) :: params  */

void negf_set_h(const int *handler, const int nrow, const double *A, const int 
    *JA, const int *IA);
/* integer, intent(in) :: handler(DAC_handlerSize)
   integer, intent(in), value, intent(in) :: nrow
   complex(dp), intent(in) :: A(*)
   integer, intent(in) :: JA(*)
   integer, intent(in) :: IA(*)  */

void negf_set_mpi_fcomm(const int *handler, const int comm);
/* integer, intent(in) :: handler(DAC_handlerSize)
   integer, intent(in), value, intent(in) :: comm  */

void negf_set_s(const int *handler, int nrow, double *A, int *JA, int *IA);
/* integer, intent(in) :: handler(DAC_handlerSize)
   integer, intent(in), value, intent(out) :: nrow
   complex(dp), intent(out) :: A(*)
   integer, intent(out) :: JA(*)
   integer, intent(out) :: IA(*)  */

void negf_set_s_cp(const int *handler, int nrow, double *a_re, double *a_im, 
    int *ja, int *ia);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), value, intent(out) :: nrow
   real(c_double), intent(out) :: a_re(*)
   real(c_double), intent(out) :: a_im(*)
   integer(c_int), intent(out) :: ja(*)
   integer(c_int), intent(out) :: ia(*)  */

void negf_set_h_cp(const int *handler, int nrow, double *a_re, double *a_im, 
    int *ja, int *ia);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), value, intent(out) :: nrow
   real(c_double), intent(out) :: a_re(*)
   real(c_double), intent(out) :: a_im(*)
   integer(c_int), intent(out) :: ja(*)
   integer(c_int), intent(out) :: ia(*)  */

void negf_set_s_id(const int *handler, int nrow);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), value, intent(out) :: nrow  */

void negf_print_mat(const int *handler);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)  */

void negf_read_input(const int *handler);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)  */

void negf_read_hs(const int *handler, const char *real_path, const char 
    *imag_path, const int target_matrix);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
   character(kind=c_char), intent(in), intent(in) :: real_path(*)
   character(kind=c_char), intent(in), intent(in) :: imag_path(*)
   integer(c_int), intent(in), value, intent(in) :: target_matrix  */

void negf_destruct_session(const int *handler);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)  */

void negf_destruct_libnegf(const int *handler);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)  */

void negf_set_verbosity(const int *handler, const int *verbose_lev);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), intent(in) :: verbose_lev  */

void negf_solve_landauer(const int *handler);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)  */

void negf_calculate_dephasing_transmission(const int *handler);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)  */

void negf_solve_density_dft(const int *handler);
/* integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)  */

void negf_get_energies(const int *handler, const int *npoints, const double 
    *re_en, const double *im_en, const int copy);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(out), intent(in) :: npoints
   real(c_double), intent(out), intent(in) :: re_en(*)
   real(c_double), intent(out), intent(in) :: im_en(*)
   integer(c_int), intent(in), value, intent(in) :: copy  */

void negf_get_dm(const int *handler, const int *nnz, const int *nrow, const int 
    *rowpnt, const int *colind, const double *re_nzval, const double *im_nzval, 
    const int copy);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(out), intent(in) :: nnz
   integer(c_int), intent(out), intent(in) :: nrow
   integer(c_int), intent(out), intent(in) :: rowpnt(*)
   integer(c_int), intent(out), intent(in) :: colind(*)
   real(c_double), intent(out), intent(in) :: re_nzval(*)
   real(c_double), intent(out), intent(in) :: im_nzval(*)
   integer(c_int), intent(in), value, intent(in) :: copy  */

void negf_get_currents(const int *handler, const int *npairs, const double 
    *currents, const int copy);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(out), intent(in) :: npairs
   real(c_double), intent(out), intent(in) :: currents(*)
   integer(c_int), intent(in), value, intent(in) :: copy  */

void negf_associate_transmission(const int *handler, int *tr_shape, double * 
    *tr_pointer);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(out), intent(out) :: tr_shape(2)
   type(c_ptr), intent(out), intent(out) :: tr_pointer  */

void negf_associate_energy_current(const int *handler, int *currents_shape, 
    double * *currents_pointer);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(out), intent(out) :: currents_shape(2)
   type(c_ptr), intent(out), intent(out) :: currents_pointer  */

void negf_associate_ldos(const int *handler, int *ldos_shape, double * 
    *ldos_pointer);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(out), intent(out) :: ldos_shape(2)
   type(c_ptr), intent(out), intent(out) :: ldos_pointer  */

void negf_set_ldos_intervals(const int *handler, const int nldos, const int 
    *istart, const int *iend);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), value, intent(in) :: nldos
   integer(c_int), intent(in), intent(in) :: istart(*)
   integer(c_int), intent(in), intent(in) :: iend(*)  */

void negf_init_ldos(const int *handler, const int nldos);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), value, intent(in) :: nldos  */

void negf_set_ldos_indexes(const int *handler, const int ildos, const int 
    *idx_size, const int *idx);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   integer(c_int), intent(in), value, intent(in) :: ildos
   integer(c_int), intent(in), intent(in) :: idx_size
   integer(c_int), intent(in), intent(in) :: idx(*)  */

void negf_write_tunneling_and_dos(const int *handler);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)  */

void negf_set_outer(const int *handler, const int *outer);
/* integer, intent(in) :: handler(DAC_handlerSize)
   integer, intent(in) :: outer  */

void negf_set_kpoint(const int *handler, const int *kpoint);
/* integer, intent(in) :: handler(DAC_handlerSize)
   integer, intent(in) :: kpoint  */

void negf_set_reference(const int *handler, const int *minmax);
/* integer, intent(in) :: handler(DAC_handlerSize)
   integer, intent(in) :: minmax  */

void negf_write_partition(const int *handler);
/* integer, intent(in) :: handler(DAC_handlerSize)  */

void negf_current(const int *handler, double *current, const char *unitsOfH, 
    const char *unitsOfJ);
/* integer, intent(in) :: handler(DAC_handlerSize)
   real(dp), intent(inout) :: current
   character(SST), intent(in) :: unitsOfH
   character(SST), intent(in) :: unitsOfJ  */

void negf_print_tnegf(const int *handler);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)  */

void negf_set_elph_dephasing(const int *handler, const double *coupling, const 
    int coupling_size, const int *orbsperatom, const int orbsperatom_size, 
    const int niter, const int model);
/* integer(c_int), intent(in) :: handler(DAC_handlerSize)
   real(c_double), intent(in), intent(in) :: coupling(*)
   integer(c_int), intent(in), value, intent(in) :: coupling_size
   integer(c_int), intent(in), intent(in) :: orbsperatom(*)
   integer(c_int), intent(in), value, intent(in) :: orbsperatom_size
   integer(c_int), intent(in), value, intent(in) :: niter
   integer(c_int), intent(in), value, intent(in) :: model  */

#endif
