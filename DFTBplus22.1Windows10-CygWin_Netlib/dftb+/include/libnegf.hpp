#ifndef _NEGF_H
#define _NEGF_H

//*************************************************************************** 
//*
//*  C++ bindings for LibNEGF 
//*
//*  Generated by bind_fortran (DO NOT EDIT MANUALLY)
//*
//***************************************************************************
//* Notes:
//*   o) these bindings need the "fortran.h" header file
//*   o) you should call only the f77_* functions from C++ in order to make
//*      sure, that your code does not depend on the naming convention of
//*      the different compilers (e.g. trailing underscores)
//***************************************************************************

#include "fortran.h"

// Some defintions for constants used by Uptight
const int NEGF_SC = 100;
const int NEGF_MC = 200;
const int NEGF_LC = 500;
const int NEGF_HSIZE = 4;
const char NEGF_PADCHAR = ' ';



extern "C" void negf_gethandlersize (int&);

// Corresponding F77 arguments for f77_negf_gethandlersize:
// integer(c_int), intent(out), intent(out) :: handlerSize
inline void f77_negf_gethandlersize (int& handlerSize)
{
  negf_gethandlersize (handlerSize);
}


extern "C" void negf_init_session (int*);

// Corresponding F77 arguments for f77_negf_init_session:
// integer(c_int), intent(out) :: handler(DAC_handlerSize)
inline void f77_negf_init_session (int* handler)
{
  negf_init_session (handler);
}


extern "C" void negf_get_version (int*);

// Corresponding F77 arguments for f77_negf_get_version:
// integer(c_int), intent(inout) :: handler(DAC_handlerSize)
inline void f77_negf_get_version (int* handler)
{
  negf_get_version (handler);
}


extern "C" void negf_init (int*);

// Corresponding F77 arguments for f77_negf_init:
// integer(c_int), intent(inout), intent(inout) :: handler(DAC_handlerSize)
inline void f77_negf_init (int* handler)
{
  negf_init (handler);
}


extern "C" void negf_init_structure (int const*, int, int const*, int const*, 
    int const*, int, int const*, int const*);

// Corresponding F77 arguments for f77_negf_init_structure:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(in) :: ncont
// integer(c_int), intent(in), intent(in) :: surfstart(*)
// integer(c_int), intent(in), intent(in) :: surfend(*)
// integer(c_int), intent(in), intent(in) :: contend(*)
// integer(c_int), intent(in), value, intent(in) :: npl
// integer(c_int), intent(in), intent(in) :: plend(*)
// integer(c_int), intent(in), intent(in) :: cblk(*)
inline void f77_negf_init_structure (int const* handler, int ncont, int const* 
    surfstart, int const* surfend, int const* contend, int npl, int const* 
    plend, int const* cblk)
{
  negf_init_structure (handler, ncont, surfstart, surfend, contend, npl, plend, 
      cblk);
}


extern "C" void negf_contact_blocks (int const*, int, int const*, int const*, 
    int const*, int, int const*, int*);

// Corresponding F77 arguments for f77_negf_contact_blocks:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(in) :: ncont
// integer(c_int), intent(in), intent(in) :: surfstart(*)
// integer(c_int), intent(in), intent(in) :: surfend(*)
// integer(c_int), intent(in), intent(in) :: contend(*)
// integer(c_int), intent(in), value, intent(in) :: npl
// integer(c_int), intent(in), intent(in) :: plend(*)
// integer(c_int), intent(inout), intent(inout) :: cblk(*)
inline void f77_negf_contact_blocks (int const* handler, int ncont, int const* 
    surfstart, int const* surfend, int const* contend, int npl, int const* 
    plend, int* cblk)
{
  negf_contact_blocks (handler, ncont, surfstart, surfend, contend, npl, plend, 
      cblk);
}


extern "C" void negf_get_pls (int const*, int&, int&, int*, int*, int);

// Corresponding F77 arguments for f77_negf_get_pls:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(out), intent(out) :: npl
// integer(c_int), intent(out), intent(out) :: ncont
// integer(c_int), intent(out), intent(out) :: plend(*)
// integer(c_int), intent(out), intent(out) :: cblk(*)
// integer(c_int), intent(in), value, intent(in) :: copy
inline void f77_negf_get_pls (int const* handler, int& npl, int& ncont, int* 
    plend, int* cblk, int copy)
{
  negf_get_pls (handler, npl, ncont, plend, cblk, copy);
}


extern "C" void negf_init_contacts (int const*, int);

// Corresponding F77 arguments for f77_negf_init_contacts:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(in) :: ncont
inline void f77_negf_init_contacts (int const* handler, int ncont)
{
  negf_init_contacts (handler, ncont);
}


extern "C" void negf_set_output (int const*, char const*);

// Corresponding F77 arguments for f77_negf_set_output:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// character(kind=c_char), intent(in), intent(in) :: c_out_path(*)
inline void f77_negf_set_output (int const* handler, char const* c_out_path)
{
  negf_set_output (handler, c_out_path);
}


extern "C" void negf_set_scratch (int const*, char const*);

// Corresponding F77 arguments for f77_negf_set_scratch:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// character(kind=c_char), intent(in), intent(in) :: c_scratch_path(*)
inline void f77_negf_set_scratch (int const* handler, char const* 
    c_scratch_path)
{
  negf_set_scratch (handler, c_scratch_path);
}


extern "C" void negf_set_params (int const*, struct lnparams const&);

// Corresponding F77 arguments for f77_negf_set_params:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// type(lnparams), intent(in), intent(in) :: params
inline void f77_negf_set_params (int const* handler, struct lnparams const& 
    params)
{
  negf_set_params (handler, params);
}


extern "C" void negf_get_params (int const*, struct lnparams&);

// Corresponding F77 arguments for f77_negf_get_params:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// type(lnparams), intent(inout), intent(inout) :: params
inline void f77_negf_get_params (int const* handler, struct lnparams& params)
{
  negf_get_params (handler, params);
}


extern "C" void negf_set_h (int const*, int, std::complex<double> const*, int 
    const*, int const*);

// Corresponding F77 arguments for f77_negf_set_h:
// integer, intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(in) :: nrow
// complex(c_double_complex), intent(in), intent(in) :: A(*)
// integer(c_int), intent(in), intent(in) :: JA(*)
// integer(c_int), intent(in), intent(in) :: IA(*)
inline void f77_negf_set_h (int const* handler, int nrow, std::complex<double> 
    const* A, int const* JA, int const* IA)
{
  negf_set_h (handler, nrow, A, JA, IA);
}


extern "C" void negf_set_mpi_fcomm (int const*, int);

// Corresponding F77 arguments for f77_negf_set_mpi_fcomm:
// integer, intent(in) :: handler(DAC_handlerSize)
// integer, intent(in), value, intent(in) :: comm
inline void f77_negf_set_mpi_fcomm (int const* handler, int comm)
{
  negf_set_mpi_fcomm (handler, comm);
}


extern "C" void negf_set_s (int const*, int, std::complex<double> const*, int 
    const*, int const*);

// Corresponding F77 arguments for f77_negf_set_s:
// integer, intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(in) :: nrow
// complex(c_double_complex), intent(in), intent(in) :: A(*)
// integer(c_int), intent(in), intent(in) :: JA(*)
// integer(c_int), intent(in), intent(in) :: IA(*)
inline void f77_negf_set_s (int const* handler, int nrow, std::complex<double> 
    const* A, int const* JA, int const* IA)
{
  negf_set_s (handler, nrow, A, JA, IA);
}


extern "C" void negf_set_s_cp (int const*, int&, double*, double*, int*, int*);

// Corresponding F77 arguments for f77_negf_set_s_cp:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(out) :: nrow
// real(c_double), intent(out) :: a_re(*)
// real(c_double), intent(out) :: a_im(*)
// integer(c_int), intent(out) :: ja(*)
// integer(c_int), intent(out) :: ia(*)
inline void f77_negf_set_s_cp (int const* handler, int& nrow, double* a_re, 
    double* a_im, int* ja, int* ia)
{
  negf_set_s_cp (handler, nrow, a_re, a_im, ja, ia);
}


extern "C" void negf_set_h_cp (int const*, int&, double*, double*, int*, int*);

// Corresponding F77 arguments for f77_negf_set_h_cp:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(out) :: nrow
// real(c_double), intent(out) :: a_re(*)
// real(c_double), intent(out) :: a_im(*)
// integer(c_int), intent(out) :: ja(*)
// integer(c_int), intent(out) :: ia(*)
inline void f77_negf_set_h_cp (int const* handler, int& nrow, double* a_re, 
    double* a_im, int* ja, int* ia)
{
  negf_set_h_cp (handler, nrow, a_re, a_im, ja, ia);
}


extern "C" void negf_set_s_id (int const*, int&);

// Corresponding F77 arguments for f77_negf_set_s_id:
// integer, intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(out) :: nrow
inline void f77_negf_set_s_id (int const* handler, int& nrow)
{
  negf_set_s_id (handler, nrow);
}


extern "C" void negf_print_mat (int const*);

// Corresponding F77 arguments for f77_negf_print_mat:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_print_mat (int const* handler)
{
  negf_print_mat (handler);
}


extern "C" void negf_read_input (int const*);

// Corresponding F77 arguments for f77_negf_read_input:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_read_input (int const* handler)
{
  negf_read_input (handler);
}


extern "C" void negf_read_hs (int const*, char const*, char const*, int);

// Corresponding F77 arguments for f77_negf_read_hs:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// character(kind=c_char), intent(in), intent(in) :: real_path(*)
// character(kind=c_char), intent(in), intent(in) :: imag_path(*)
// integer(c_int), intent(in), value, intent(in) :: target_matrix
inline void f77_negf_read_hs (int const* handler, char const* real_path, char 
    const* imag_path, int target_matrix)
{
  negf_read_hs (handler, real_path, imag_path, target_matrix);
}


extern "C" void negf_destruct_session (int const*);

// Corresponding F77 arguments for f77_negf_destruct_session:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_destruct_session (int const* handler)
{
  negf_destruct_session (handler);
}


extern "C" void negf_destruct_libnegf (int const*);

// Corresponding F77 arguments for f77_negf_destruct_libnegf:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_destruct_libnegf (int const* handler)
{
  negf_destruct_libnegf (handler);
}


extern "C" void negf_set_verbosity (int const*, int const&);

// Corresponding F77 arguments for f77_negf_set_verbosity:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), intent(in) :: verbose_lev
inline void f77_negf_set_verbosity (int const* handler, int const& verbose_lev)
{
  negf_set_verbosity (handler, verbose_lev);
}


extern "C" void negf_solve_landauer (int const*);

// Corresponding F77 arguments for f77_negf_solve_landauer:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_solve_landauer (int const* handler)
{
  negf_solve_landauer (handler);
}


extern "C" void negf_calculate_dephasing_transmission (int const*);

// Corresponding F77 arguments for f77_negf_calculate_dephasing_transmission:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_calculate_dephasing_transmission (int const* handler)
{
  negf_calculate_dephasing_transmission (handler);
}


extern "C" void negf_density_efa (int const*, int const&, f77_double const*, 
    int const&);

// Corresponding F77 arguments for f77_negf_density_efa:
// integer, intent(in) :: handler(DAC_handlerSize)
// integer, intent(in) :: ndofs
// real(dp), intent(in) :: density(ndofs)
// integer, intent(in) :: particle
inline void f77_negf_density_efa (int const* handler, int const& ndofs, 
    f77_double const* density, int const& particle)
{
  negf_density_efa (handler, ndofs, density, particle);
}


extern "C" void negf_solve_density_dft (int const*);

// Corresponding F77 arguments for f77_negf_solve_density_dft:
// integer(c_int), intent(in), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_solve_density_dft (int const* handler)
{
  negf_solve_density_dft (handler);
}


extern "C" void negf_get_energies (int const*, int const&, double const*, 
    double const*, int);

// Corresponding F77 arguments for f77_negf_get_energies:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(out), intent(in) :: npoints
// real(c_double), intent(out), intent(in) :: re_en(*)
// real(c_double), intent(out), intent(in) :: im_en(*)
// integer(c_int), intent(in), value, intent(in) :: copy
inline void f77_negf_get_energies (int const* handler, int const& npoints, 
    double const* re_en, double const* im_en, int copy)
{
  negf_get_energies (handler, npoints, re_en, im_en, copy);
}


extern "C" void negf_get_dm (int const*, int const&, int const&, int const*, 
    int const*, double const*, double const*, int);

// Corresponding F77 arguments for f77_negf_get_dm:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(out), intent(in) :: nnz
// integer(c_int), intent(out), intent(in) :: nrow
// integer(c_int), intent(out), intent(in) :: rowpnt(*)
// integer(c_int), intent(out), intent(in) :: colind(*)
// real(c_double), intent(out), intent(in) :: re_nzval(*)
// real(c_double), intent(out), intent(in) :: im_nzval(*)
// integer(c_int), intent(in), value, intent(in) :: copy
inline void f77_negf_get_dm (int const* handler, int const& nnz, int const& 
    nrow, int const* rowpnt, int const* colind, double const* re_nzval, double 
    const* im_nzval, int copy)
{
  negf_get_dm (handler, nnz, nrow, rowpnt, colind, re_nzval, im_nzval, copy);
}


extern "C" void negf_get_currents (int const*, int const&, double const*, int);

// Corresponding F77 arguments for f77_negf_get_currents:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(out), intent(in) :: npairs
// real(c_double), intent(out), intent(in) :: currents(*)
// integer(c_int), intent(in), value, intent(in) :: copy
inline void f77_negf_get_currents (int const* handler, int const& npairs, 
    double const* currents, int copy)
{
  negf_get_currents (handler, npairs, currents, copy);
}


extern "C" void negf_associate_transmission (int const*, int*, double **);

// Corresponding F77 arguments for f77_negf_associate_transmission:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(out), intent(out) :: tr_shape(2)
// type(c_ptr), intent(out), intent(out) :: tr_pointer
inline void f77_negf_associate_transmission (int const* handler, int* tr_shape, 
    double ** tr_pointer)
{
  negf_associate_transmission (handler, tr_shape, tr_pointer);
}


extern "C" void negf_associate_energy_current (int const*, int*, double **);

// Corresponding F77 arguments for f77_negf_associate_energy_current:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(out), intent(out) :: currents_shape(2)
// type(c_ptr), intent(out), intent(out) :: currents_pointer
inline void f77_negf_associate_energy_current (int const* handler, int* 
    currents_shape, double ** currents_pointer)
{
  negf_associate_energy_current (handler, currents_shape, currents_pointer);
}


extern "C" void negf_associate_ldos (int const*, int*, double **);

// Corresponding F77 arguments for f77_negf_associate_ldos:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(out), intent(out) :: ldos_shape(2)
// type(c_ptr), intent(out), intent(out) :: ldos_pointer
inline void f77_negf_associate_ldos (int const* handler, int* ldos_shape, 
    double ** ldos_pointer)
{
  negf_associate_ldos (handler, ldos_shape, ldos_pointer);
}


extern "C" void negf_set_ldos_intervals (int const*, int, int const*, int 
    const*);

// Corresponding F77 arguments for f77_negf_set_ldos_intervals:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(in) :: nldos
// integer(c_int), intent(in), intent(in) :: istart(*)
// integer(c_int), intent(in), intent(in) :: iend(*)
inline void f77_negf_set_ldos_intervals (int const* handler, int nldos, int 
    const* istart, int const* iend)
{
  negf_set_ldos_intervals (handler, nldos, istart, iend);
}


extern "C" void negf_init_ldos (int const*, int);

// Corresponding F77 arguments for f77_negf_init_ldos:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(in) :: nldos
inline void f77_negf_init_ldos (int const* handler, int nldos)
{
  negf_init_ldos (handler, nldos);
}


extern "C" void negf_set_ldos_indexes (int const*, int, int const&, int const*);

// Corresponding F77 arguments for f77_negf_set_ldos_indexes:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// integer(c_int), intent(in), value, intent(in) :: ildos
// integer(c_int), intent(in), intent(in) :: idx_size
// integer(c_int), intent(in), intent(in) :: idx(*)
inline void f77_negf_set_ldos_indexes (int const* handler, int ildos, int 
    const& idx_size, int const* idx)
{
  negf_set_ldos_indexes (handler, ildos, idx_size, idx);
}


extern "C" void negf_write_tunneling_and_dos (int const*);

// Corresponding F77 arguments for f77_negf_write_tunneling_and_dos:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_write_tunneling_and_dos (int const* handler)
{
  negf_write_tunneling_and_dos (handler);
}


extern "C" void negf_set_outer (int const*, int const&);

// Corresponding F77 arguments for f77_negf_set_outer:
// integer, intent(in) :: handler(DAC_handlerSize)
// integer, intent(in) :: outer
inline void f77_negf_set_outer (int const* handler, int const& outer)
{
  negf_set_outer (handler, outer);
}


extern "C" void negf_set_kpoint (int const*, int const&);

// Corresponding F77 arguments for f77_negf_set_kpoint:
// integer, intent(in) :: handler(DAC_handlerSize)
// integer, intent(in) :: kpoint
inline void f77_negf_set_kpoint (int const* handler, int const& kpoint)
{
  negf_set_kpoint (handler, kpoint);
}


extern "C" void negf_set_reference (int const*, int const&);

// Corresponding F77 arguments for f77_negf_set_reference:
// integer, intent(in) :: handler(DAC_handlerSize)
// integer, intent(in) :: minmax
inline void f77_negf_set_reference (int const* handler, int const& minmax)
{
  negf_set_reference (handler, minmax);
}


extern "C" void negf_write_partition (int const*);

// Corresponding F77 arguments for f77_negf_write_partition:
// integer, intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_write_partition (int const* handler)
{
  negf_write_partition (handler);
}


extern "C" void negf_current (int const*, f77_double&, char const*, char 
    const*);

// Corresponding F77 arguments for f77_negf_current:
// integer, intent(in) :: handler(DAC_handlerSize)
// real(dp), intent(inout) :: current
// character(kind=c_char), intent(in), intent(in) :: c_unitsOfH(*)
// character(kind=c_char), intent(in), intent(in) :: c_unitsOfJ(*)
inline void f77_negf_current (int const* handler, f77_double& current, char 
    const* c_unitsOfH, char const* c_unitsOfJ)
{
  negf_current (handler, current, c_unitsOfH, c_unitsOfJ);
}


extern "C" void negf_print_tnegf (int const*);

// Corresponding F77 arguments for f77_negf_print_tnegf:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_print_tnegf (int const* handler)
{
  negf_print_tnegf (handler);
}


extern "C" void negf_set_elph_dephasing (int const*, double const*, int, int 
    const*, int, int, int);

// Corresponding F77 arguments for f77_negf_set_elph_dephasing:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
// real(c_double), intent(in), intent(in) :: coupling(*)
// integer(c_int), intent(in), value, intent(in) :: coupling_size
// integer(c_int), intent(in), intent(in) :: orbsperatom(*)
// integer(c_int), intent(in), value, intent(in) :: orbsperatom_size
// integer(c_int), intent(in), value, intent(in) :: niter
// integer(c_int), intent(in), value, intent(in) :: model
inline void f77_negf_set_elph_dephasing (int const* handler, double const* 
    coupling, int coupling_size, int const* orbsperatom, int orbsperatom_size, 
    int niter, int model)
{
  negf_set_elph_dephasing (handler, coupling, coupling_size, orbsperatom, 
      orbsperatom_size, niter, model);
}


extern "C" void negf_mem_stats (int const*);

// Corresponding F77 arguments for f77_negf_mem_stats:
// integer(c_int), intent(in) :: handler(DAC_handlerSize)
inline void f77_negf_mem_stats (int const* handler)
{
  negf_mem_stats (handler);
}


#endif

