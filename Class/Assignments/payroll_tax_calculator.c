/* payroll_tax_calculator.c
   Payroll & Tax Calculator
   - Inputs base_salary and bonus
   - gross = base_salary + bonus
   - tax rate = 10% if gross <= 1000, else 15%
   - Uses ternary operator ?: for deciding tax rate
   - Allows re-entry but ensures tax isn't applied twice (always recalculates from raw inputs)
*/

#include <stdio.h>

int main(void) {
    double base_salary = 0.0, bonus = 0.0;
    double gross = 0.0, tax = 0.0, net_pay = 0.0;
    double tax_rate;
    char choice;

    printf("=== Payroll & Tax Calculator ===\n\n");

    do {
        /* Input with basic validation (non-negative values) */
        do {
            printf("Enter base salary (RWF, >= 0): ");
            if (scanf("%lf", &base_salary) != 1) {
                /* clear invalid input */
                while (getchar() != '\n');
                base_salary = -1.0;
                printf("Invalid input. Please enter a numeric value.\n");
            } else if (base_salary < 0) {
                printf("Base salary cannot be negative. Try again.\n");
            }
        } while (base_salary < 0);

        do {
            printf("Enter bonus (RWF, >= 0): ");
            if (scanf("%lf", &bonus) != 1) {
                while (getchar() != '\n');
                bonus = -1.0;
                printf("Invalid input. Please enter a numeric value.\n");
            } else if (bonus < 0) {
                printf("Bonus cannot be negative. Try again.\n");
            }
        } while (bonus < 0);

        /* Calculate fresh from raw inputs every time (prevents double-taxing) */
        gross = base_salary + bonus;

        /* Ternary operator to pick tax rate */
        tax_rate = (gross <= 1000.0) ? 0.10 : 0.15;
        tax = gross * tax_rate;
        net_pay = gross - tax;

        /* Display results neatly */
        printf("\n--- Payroll Summary ---\n");
        printf("Base salary : RWF %.2f\n", base_salary);
        printf("Bonus       : RWF %.2f\n", bonus);
        printf("Gross salary: RWF %.2f\n", gross);
        printf("Tax rate    : %.0f%%\n", tax_rate * 100);
        printf("Tax deducted: RWF %.2f\n", tax);
        printf("Net pay     : RWF %.2f\n", net_pay);
        printf("------------------------\n");

        /* Ask user if they want to recompute with new values */
        /* Clear stdin leftover newline before reading choice */
        while (getchar() != '\n'); /* consume until newline */
        printf("Do you want to enter another salary? (y/n): ");
        choice = getchar();
        /* consume any extra input on that line */
        while (getchar() != '\n');

        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting Payroll Calculator. Goodbye!\n");
    return 0;
}

