C $Header: /u/gcmpack/MITgcm_contrib/darwin/verification/darwin_baltic_76x72x24/code/DARWIN_OPTIONS.h,v 1.1 2009/02/27 19:04:27 jahn Exp $
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


#endif /* ALLOW_DARWIN */
#endif /* DARWIN_OPTIONS_H */
