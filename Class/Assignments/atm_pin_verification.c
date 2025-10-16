/* atm_pin_verification.c
   ATM PIN Verification System using do...while loop

   Requirements:
   - Correct PIN = 1234
   - User has 3 attempts
   - If correct → "Access Granted"
   - After 3 failures → "Card Blocked"
   - Explain why do...while is the best choice
*/

#include <stdio.h>

int main(void) {
    const int CORRECT_PIN = 1234;
    int pin, attempts = 0;
    int accessGranted = 0;

    printf("=== ATM PIN Verification ===\n\n");

    do {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);
        attempts++;

        if (pin == CORRECT_PIN) {
            accessGranted = 1;
            break;
        } else {
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }

    } while (attempts < 3);

    if (accessGranted) {
        printf("\nAccess Granted\n");
    } else {
        printf("\nCard Blocked\n");
    }

    return 0;
}

