#ifndef BATTERY_MON_CHECK_SOC_H
#define BATTERY_MON_CHECK_SOC_H

#include <stdio.h>
#include "Parameter_Check.h"

#define SOC_MIN 20.0
#define SOC_MAX 80.0

#define WARN_FOR_SOC 1

void checkSoc(float soc, ParameterState *state);

#endif 
