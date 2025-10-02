#include <stdio.h>

int main() {
    int numberOfItems;
    float costPerItem;
    char currency[4];

    
    printf("Enter the currency code (e.g., USD, EUR, RWF): ");
    scanf("%3s", currency);  // Read up to 3 characters safely

    printf("Enter the number of items: ");
    scanf("%d", &numberOfItems);

    printf("Enter the cost per item: ");
    scanf("%f", &costPerItem);

    
    float totalCost = numberOfItems * costPerItem;

    
    printf("\n--- Purchase Summary ---\n");
    printf("Number of items : %d\n", numberOfItems);
    printf("Cost per item   : %s%.2f\n", currency, costPerItem);
    printf("Total cost      : %s%.2f\n", currency, totalCost);

    return 0;
}

