#include <stdio.h>
#include <assert.h>

// Simplified range check function
int rangecheck(float value, float lower_limit, float upper_limit) {
    return (value >= lower_limit && value <= upper_limit);
}

// Battery status check
int batteryIsOk(float temperature, float soc, float chargeRate) {
    // Check temperature and SOC
    int tempOk = rangecheck(temperature, 0, 45);
    int socOk = rangecheck(soc, 20, 80);

    // Check if charge rate is within acceptable limits
    int chargeRateOk = (chargeRate <= 0.8);

    // Return 1 if all conditions are met
    return tempOk && socOk && chargeRateOk;
}

int main() {
    // Testing the batteryIsOk function
    assert(batteryIsOk(25, 70, 0.7)); // Should pass
    assert(!batteryIsOk(50, 85, 0));  // Should fail
    return 0;
}
