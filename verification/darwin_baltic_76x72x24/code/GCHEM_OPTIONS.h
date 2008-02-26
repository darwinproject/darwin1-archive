C $Header: /u/gcmpack/MITgcm_contrib/darwin/verification/darwin_baltic_76x72x24/code/Attic/GCHEM_OPTIONS.h,v 1.2 2008/02/26 19:16:05 jahn Exp $
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
#undef  READ_PAR
#define USE_QSW
#define MINFE
#undef  NUT_SUPPLY
#undef  CONS_SUPP
#undef  OLD_GRAZE
#undef  ALLOW_DIAZ
#undef  OLD_NSCHEME
#undef  ALLOW_MUTANTS
#define	PORT_RAND
#undef  OLDSEED

#define CHECK_CONS
#define DAR_DIAG_RSTAR
#define DAR_DIAG_DIVER


#endif /* ALLOW_GCHEM */
#endif /* GCHEM_OPTIONS_H */
