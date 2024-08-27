#include <stdio.h>
#include <assert.h>

// functions to check each condition
int RangeTemperature(float temperature) 
{
    return temperature >= 0 && temperature <= 45;
}

int RangeSoc(float soc) 
{
    return soc >= 20 && soc <= 80;
}

int RangeChargeRate(float chargeRate) 
{
    return chargeRate <= 0.8;
}

// Checking if battery is OK
int batteryIsOk(float temperature, float soc, float chargeRate)
 {
    if (!RangeTemperature(temperature)) {
        printf("Temperature out of range!\n");
        return 0;
    }
    if (!RangeSoc(soc)) {
        printf("State of Charge out of range!\n");
        return 0;
    }
    if (!RangeChargeRate(chargeRate)) {
        printf("Charge Rate out of range!\n");
        return 0;
    }
    return 1;
}

int main() {
    assert(batteryIsOk(25, 70, 0.7)); // 1
    assert(!batteryIsOk(50, 85, 0)); // 0
    return 0;
}

