C $Header: /u/gcmpack/MITgcm_contrib/darwin/verification/darwin_1d_geider/code/DARWIN_OPTIONS.h,v 1.1 2009/02/27 19:04:27 jahn Exp $
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
#undef  OLD_GRAZE
#undef  ALLOW_DIAZ
#undef  OLD_NSCHEME
#undef  ALLOW_MUTANTS
#define PORT_RAND
#undef OLDSEED
#define GEIDER

c ANNA turn wavebands on/off
#undef WAVEBANDS 
c#define WAVEBANDS

#undef  CHECK_CONS
#undef  DAR_DIAG_RSTAR
#undef  DAR_DIAG_DIVER


#endif /* ALLOW_DARWIN */
#endif /* DARWIN_OPTIONS_H */
