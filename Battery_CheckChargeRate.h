#ifndef BATTERY_MON_CHECK_CHARGERATE_H
#define BATTERY_MON_CHECK_CHARGERATE_H

#include <stdio.h>
#include "Parameter_Check.h"

#define CHARGE_RATE_MAX 0.8

#define WARN_FOR_CHARGE_RATE 1

void checkChargeRate(float chargeRate, ParameterState *state);

#endif 
