#include <stdio.h>
#include <assert.h>
int rangecheck( float value, float lower_limit, float upper_limit, char parameter)
{
if( value < lower_limit || value > upperlimit)
{
printf("%s is out of range", parameter);
return 0;
}
return 1;
}
int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(rangecheck(Temperature,0,45,"Temperature")||
    rangecheck(SOC,20,80,"SOC")|| 
  (chargeRate > 0.8){
    return 0;
  } 
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
