C $Header: /u/gcmpack/MITgcm_contrib/darwin/verification/darwin_1d_wavebands/code/Attic/GCHEM_OPTIONS.h,v 1.1 2008/08/01 21:46:42 stephd Exp $
C $Name:  $

#ifndef GCHEM_OPTIONS_H
#define GCHEM_OPTIONS_H
#include "PACKAGES_CONFIG.h"
#ifdef ALLOW_GCHEM

#include "CPP_OPTIONS.h"

CBOP
C    !ROUTINE: GCHEM_OPTIONS.h
C    !INTERFACE:

C    !DESCRIPTION:
c options for biogeochemistry package
CEOP

#define GCHEM_SEPARATE_FORCING
#undef  DIC_BIOTIC
#undef  ALLOW_FE
#undef  CAR_DISS
#define READ_PAR
#define MINFE
#undef  NUT_SUPPLY
#undef  CONS_SUPP
#undef  OLD_GRAZE
#undef  ALLOW_DIAZ
#undef  OLD_NSCHEME
#undef  ALLOW_MUTANTS
#define PORT_RAND
#undef OLDSEED
#define GEIDER

c ANNA turn wavebands on/off
#define WAVEBANDS 
c#define WAVEBANDS

#undef  CHECK_CONS
#undef  DAR_DIAG_RSTAR
#undef  DAR_DIAG_DIVER


#endif /* ALLOW_GCHEM */
#endif /* GCHEM_OPTIONS_H */
