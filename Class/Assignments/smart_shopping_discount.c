/* smart_shopping_discount.c
   Smart Shopping Discount System

   Requirements:
   - Input amount and membership flag (1 = member, 0 = non-member).
   - Rules:
       If amount > 5000 & member        → 15%
       If amount > 5000 & not member    → 10%
       If amount ≤ 5000 & member        → 5%
       Else                             → no discount
   - Use logical (&&, ||) and ternary operators.
   - Apply rounding to 2 decimal places without using math.h
*/

#include <stdio.h>

int main(void) {
    double amount, discountRate, discount, finalAmount;
    int member;

    printf("=== Smart Shopping Discount System ===\n\n");

    // Input: amount
    do {
        printf("Enter the total amount (RWF >= 0): ");
        if (scanf("%lf", &amount) != 1) {
            // Clear invalid input
            while (getchar() != '\n');
            amount = -1;
        }
        if (amount < 0) {
            printf("Invalid input. Please enter a non-negative number.\n");
        }
    } while (amount < 0);

    // Input: membership
    do {
        printf("Are you a member? (1 = Yes, 0 = No): ");
        if (scanf("%d", &member) != 1) {
            while (getchar() != '\n');
            member = -1;
        }
        if (member != 0 && member != 1) {
            printf("Invalid input. Please enter 1 or 0.\n");
        }
    } while (member != 0 && member != 1);

    // Determine discount rate using logical operators and ternary
    if (amount > 5000 && member == 1) {
        discountRate = 0.15;
    } else if (amount > 5000 && member == 0) {
        discountRate = 0.10;
    } else if (amount <= 5000 && member == 1) {
        discountRate = 0.05;
    } else {
        discountRate = 0.0;
    }

    // Calculate discount
    discount = amount * discountRate;
    finalAmount = amount - discount;

    // Round to 2 decimals without math.h by using an integer trick
    // e.g., round(x) to 2 decimals -> (int)(x * 100 + 0.5) / 100.0
    discount = (int)(discount * 100 + 0.5) / 100.0;
    finalAmount = (int)(finalAmount * 100 + 0.5) / 100.0;

    // Display results
    printf("\n--- Discount Summary ---\n");
    printf("Original Amount : RWF %.2f\n", amount);
    printf("Membership      : %s\n", (member == 1) ? "Member" : "Non-member");
    printf("Discount Rate   : %.0f%%\n", discountRate * 100);
    printf("Discount        : RWF %.2f\n", discount);
    printf("Final Amount    : RWF %.2f\n", finalAmount);
    printf("-------------------------\n");

    return 0;
}

