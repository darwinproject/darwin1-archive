C $Header: /u/gcmpack/MITgcm_contrib/darwin/pkg/darwin/DARWIN_OPTIONS.h,v 1.4 2009/03/10 20:44:30 stephd Exp $
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
C options for darwin package
CEOP

#define READ_PAR
#undef  USE_QSW
#define MINFE
#undef  NUT_SUPPLY
#undef  CONS_SUPP
#undef  OLD_GRAZE
#undef  ALLOW_DIAZ
#undef  OLD_NSCHEME
#undef  ALLOW_MUTANTS
#define PORT_RAND
#undef  OLDSEED
#undef  GEIDER
#undef  WAVEBANDS
#undef  RELAX_NUTS
#undef  FLUX_NUTS

#undef  CHECK_CONS
#undef  DAR_DIAG_RSTAR
#undef  DAR_DIAG_DIVER

c ANNA turn inhbition on/off
c curently only set for Wavebands, LL Pro's
c#define INHIB_GEID 
#define INHIB_WAVES

C diagnostic chlorophyll
#undef  DAR_DIAG_CHL

C average PAR daily and store previous day
#undef  ALLOW_PAR_DAY


C dependencies
#ifdef DAR_DIAG_CHL
#define ALLOW_PAR_DAY
#endif

#endif /* ALLOW_DARWIN */
#endif /* DARWIN_OPTIONS_H */