#include "Battery_CheckChargeRate.h"
#include "Parameter_Check.h"

void checkChargeRate(float chargeRate, ParameterState *state) 
{
    setParameterState(state, "Charge Rate out of range!", 
                     "", 
                     "Warning: Approaching charge rate peak!");
    
    checkBounds(chargeRate, 0, CHARGE_RATE_MAX, state->errorMessage);
    
    if (WARN_FOR_CHARGE_RATE) 
    {
        handleWarningHigh(chargeRate, CHARGE_RATE_MAX, state);
    }
}
