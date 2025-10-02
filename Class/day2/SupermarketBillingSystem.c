#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int numberOfItems;
    char currency[10];  // Currency code like USD, RWF
    float price, discount, finalPrice, totalBill = 0;

    // Initialize random number generator
    srand(time(NULL));

    // Ask for number of items
    printf("Enter the number of items you are buying: ");
    scanf("%d", &numberOfItems);

    // Ask for currency code
    printf("Enter the currency code (e.g., USD, RWF, UGX): ");
    scanf("%s", currency);

    // Loop through each item
    for (int i = 1; i <= numberOfItems; i++) {
        printf("\nEnter price of item %d: ", i);
        scanf("%f", &price);

        // Generate random discount between 0% and 10%
        discount = (rand() % 11) / 100.0;  // 0 to 10%
        finalPrice = price * (1 - discount);

        printf("Discount applied: %.0f%%\n", discount * 100);
        printf("Price after discount: %s%.2f\n", currency, finalPrice);

        // Add to total bill
        totalBill += finalPrice;
    }

    // Print total bill
    printf("\n--- Total Bill ---\n");
    printf("Total amount to pay: %s%.2f\n", currency, totalBill);

    return 0;
}

