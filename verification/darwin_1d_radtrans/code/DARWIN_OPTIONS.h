C $Header: /u/gcmpack/MITgcm_contrib/darwin/verification/darwin_1d_radtrans/code/DARWIN_OPTIONS.h,v 1.1 2010/11/30 18:25:31 jahn Exp $
C $Name:  $

#ifndef DARWIN_OPTIONS_H
#define DARWIN_OPTIONS_H
#include "PACKAGES_CONFIG.h"
#ifdef ALLOW_DARWIN

#include "CPP_OPTIONS.h"

CBOP
C    !ROUTINE: DARWIN_OPTIONS.h
C    !INTERFACE:

C    !DESCRIPTION:
c options for darwin package
CEOP

#define READ_PAR
#define MINFE
#undef  NUT_SUPPLY
#undef  CONS_SUPP
#undef  ALLOW_DIAZ
#undef  ALLOW_MUTANTS
#define PORT_RAND

#define GEIDER
#define WAVEBANDS 
#define OASIM
#define DAR_CALC_ACDOM
#define DAR_RADTRANS
#define DAR_RADTRANS_USE_MODEL_CALENDAR
#define DAR_RADTRANS_ITERATIVE

#undef  RELAX_NUTS
#undef  FLUX_NUTS

#undef  CHECK_CONS
#undef  DAR_DIAG_RSTAR
#undef  DAR_DIAG_DIVER
#undef  DAR_DIAG_GROW
#define DAR_DIAG_ACDOM
#define DAR_DIAG_ABSORP
#define DAR_DIAG_SCATTER
#define DAR_DIAG_IRR

C diagnostic chlorophyll
#undef  DAR_DIAG_CHL

#endif /* ALLOW_DARWIN */
#endif /* DARWIN_OPTIONS_H */
