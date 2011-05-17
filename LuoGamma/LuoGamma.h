#ifndef LUO_H_INCLUDED
#define LUO_H_INCLUDED

#include "udf.h"
#include "sg_pb.h"
#include "sg_mphase.h"
#include <gsl/gsl_errno.h>
#include <gsl/gsl_integration.h>
#include <gsl/gsl_sf_gamma.h>

/* GSL use real precision */
#if RP_DOUBLE == 0
#error "UDF requires real precision mode"
#endif

typedef struct ParametryFce
{
    real eps;
    real alpha;
    real d_1;

} ParametryFce;

real IntegraceF(real, void*);

#endif
