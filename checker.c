#include <stdio.h>
#include <assert.h>

int isOutOfRange(float value, float lowerLimit, float upperLimit, const char* parameter) {
 if (value < lowerLimit || value > upperLimit) {
     printf("%s out of range!\n", parameter);
     return 1;
 }
 return 0;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
 if (isOutOfRange(temperature, 0, 45, "Temperature") ||
     isOutOfRange(soc, 20, 80, "State of Charge") ||
     chargeRate > 0.8) {
     return 0;
 }
 return 1;
}

int main() {
 assert(batteryIsOk(25, 70, 0.7));
 assert(!batteryIsOk(50, 85, 0));
}
