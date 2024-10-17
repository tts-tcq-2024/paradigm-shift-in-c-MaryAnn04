#include "Battery_CheckTemperature.h"
#include "Parameter_Check.h"

void checkTemperature(float temperature, ParameterState *state) 
{
    setParameterState(state, "Temperature out of range!", 
                     "Warning: Approaching low temperature!", 
                     "Warning: Approaching high temperature!");
    
    checkBounds(temperature, TEMPERATURE_MIN, TEMPERATURE_MAX, state->errorMessage);
    
    if (WARN_FOR_TEMPERATURE) 
    {
        checkWarnings(temperature, TEMPERATURE_MIN, TEMPERATURE_MAX, state);
    }
}
