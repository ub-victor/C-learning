#include <stdio.h>
#include <stdlib.h>   // for rand() and srand()
#include <time.h>     // for time()

int main() {
    int n, i;
    float price, discount, discounted_price, total = 0;
    char currency[10];

    // Seed random number generator
    srand(time(0));

    printf("Enter the number of items: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter price of item %d: ", i);
        scanf("%f", &price);

        // Generate random discount between 0 and 10%
        discount = rand() % 11; // gives 0 to 10
        discounted_price = price - (price * discount / 100);

        printf("Discount: %.0f%%\n", discount);
        printf("Discounted price: %.2f\n", discounted_price);

        total += discounted_price;
    }

    printf("\nEnter currency code (e.g., RWF, USD, UGX): ");
    scanf("%s", currency);

    printf("\n-----------------------------------");
    printf("\n        FINAL BILL SUMMARY");
    printf("\n-----------------------------------");
    printf("\nTotal amount: %.2f %s", total, currency);
    printf("\n-----------------------------------\n");

    return 0;
}

