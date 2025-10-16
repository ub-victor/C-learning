/* smart_electricity_billing.c
   Smart Electricity Billing System
   - Inputs electricity units
   - Tiered billing:
       Up to 100 units  → 1.5 RWF/unit
       101–200 units    → 2 RWF/unit
       Above 200        → 3 RWF/unit
   - Add 10% service charge if units > 150 AND < 300
   - Uses relational (>, <, <=), logical (&&), and compound assignment (+=)
   - Handles incorrect unit entries (negative or over 1000)
*/

#include <stdio.h>

int main(void) {
    int units;
    double bill = 0.0;
    double rate = 0.0;

    printf("=== Smart Electricity Billing System ===\n");

    /* Input with validation */
    do {
        printf("Enter electricity units (0 to 1000): ");
        if (scanf("%d", &units) != 1) {
            while (getchar() != '\n'); // clear invalid input
            units = -1;
        }
        if (units < 0 || units > 1000) {
            printf("Invalid entry. Units must be between 0 and 1000.\n");
        }
    } while (units < 0 || units > 1000);

    /* Tiered billing */
    if (units <= 100) {
        rate = 1.5;
    } else if (units <= 200) {
        rate = 2.0;
    } else {
        rate = 3.0;
    }

    bill = units * rate;

    /* Add 10% service charge if units > 150 AND < 300 */
    if (units > 150 && units < 300) {
        double service_charge = bill * 0.10;
        bill += service_charge;  // compound assignment +=
    }

    /* Display result */
    printf("\n--- Billing Summary ---\n");
    printf("Units consumed : %d\n", units);
    printf("Rate applied   : %.1f RWF/unit\n", rate);
    printf("Total bill     : %.2f RWF\n", bill);
    printf("-------------------------\n");

    return 0;
}

