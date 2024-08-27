#include <stdio.h>
#include <assert.h>

int battery_is_ok(float temperature, float soc, float charge_rate) {
    int is_temp_ok = (temperature >= 0 && temperature <= 45);
    int is_soc_ok = (soc >= 20 && soc <= 80);
    int is_charge_rate_ok = (charge_rate <= 0.8);

    if (!is_temp_ok) {
        printf("Temperature is out of range!\n");
    }
    if (!is_soc_ok) {
        printf("State of Charge is out of range!\n");
    }
    if (!is_charge_rate_ok) {
        printf("Charge rate is out of range!\n");
    }

    return is_temp_ok && is_soc_ok && is_charge_rate_ok;
}

int main() {
    assert(battery_is_ok(25, 70, 0.7));
    assert(!battery_is_ok(50, 85, 0));
    printf("All tests passed.\n");
    return 0;
}
