#ifndef BATTERY_MON_CHECK_TEMPERATURE_H
#define BATTERY_MON_CHECK_TEMPERATURE_H

#include <stdio.h>
#include "Parameter_Check.h"

#define TEMPERATURE_MIN 0.0
#define TEMPERATURE_MAX 45.0

#define WARN_FOR_TEMPERATURE 1

void checkTemperature(float temperature, ParameterState *state);

#endif 
