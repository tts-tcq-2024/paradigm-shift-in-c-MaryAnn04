#include <stdio.h>
#include <assert.h>
 
int temp_check(float temperature) {
   if (temperature < 0 || temperature > 45) {
       printf("Temperature is out of range!\n");
       return 0; 
   }
   return 1;
}
 
int soc_check(float soc) {
   if (soc < 20 || soc > 80) {
       printf("State of Charge is out of range!\n");
       return 0; 
   }
   return 1;
}
 
int charge_rate_check(float charge_rate) {
   if (charge_rate > 0.8) {
       printf("Charge rate is out of range!\n");
       return 0; 
   }
   return 1;
}
 
int battery_is_ok(float temperature, float soc, float charge_rate) {
   return temp_check(temperature) && soc_check(soc) && charge_rate_check(charge_rate);
}
 
int main() {
   assert(battery_is_ok(25, 70, 0.7));
   assert(!battery_is_ok(50, 85, 0));
 
   return 0;
}
