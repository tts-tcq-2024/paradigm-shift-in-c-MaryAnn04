#include <stdio.h>
#include "Parameter_Check.h"

void printMessage(const char *message)
{
    printf("%s\n", message);
}

void setParameterState(ParameterState *state, const char *errorMessage, const char *warningLow, const char *warningHigh) {
    state->errorMessage = errorMessage;
    state->warningLow = warningLow;
    state->warningHigh = warningHigh;
}

int isOutOfRange(float value, float min, float max) {
    return value < min || value > max;
}

int isWarningLow(float value, float min, float max) {
    float warningLowThreshold = min + (TOLERANCE_PERCENTAGE * max);
    return value <= warningLowThreshold;
}

int isWarningHigh(float value, float max) {
    float warningHighThreshold = max - (TOLERANCE_PERCENTAGE * max);
    return value >= warningHighThreshold;
}

void checkBounds(float value, float min, float max, const char *errorMessage) {
    if (isOutOfRange(value, min, max)) {
        printMessage(errorMessage);
    }
}

void handleWarningLow(float value, float min, float max, const ParameterState *state) {
    if (isWarningLow(value, min, max)) {
        printMessage(state->warningLow);
    }
}

void handleWarningHigh(float value, float max, const ParameterState *state) {
    if (isWarningHigh(value, max)) {
        printMessage(state->warningHigh);
    }
}

void checkWarnings(float value, float min, float max, const ParameterState *state) {
    handleWarningLow(value, min, max, state);
    handleWarningHigh(value, max, state);
}
