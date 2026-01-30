#include <stdio.h>
#include <stdlib.h>  // Required for calloc() and free()

int main() {
    int n, i;
    int *numbers;
    
    // Ask user how many numbers they want to store
    printf("Enter how many numbers you want to store: ");
    scanf("%d", &n);
    
    // Allocate memory for n integers using calloc
    // calloc initializes all bytes to 0 (unlike malloc which leaves garbage values)
    numbers = (int*) calloc(n, sizeof(int));
    
    // Check if memory allocation was successful
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit with error code
    }
    
    printf("Memory allocated successfully!\n");
    
    // Get numbers from user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Display the numbers
    printf("\nYou entered these numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Free the allocated memory
    free(numbers);
    printf("\nMemory has been freed!\n");
    
    // Good practice: set pointer to NULL after freeing
    numbers = NULL;
    
    return 0;
}
