#include <stdio.h>

int main() {
    char ASCII;
    printf("Please enter a character: ");
    scanf("%c", &ASCII);  // Read the character input
    getchar(); // Clear the newline left in the buffer after pressing Enter
    printf("%i\n", ASCII); // Print the ASCII value of the character

    int integer;
    printf("Please enter an integer between 0 - 127: ");
    scanf("%i", &integer);  // Read the integer input
    getchar();  // Clear the newline after integer input
    printf("%c\n", integer);  // Print the character corresponding to the ASCII value

    // Math with ASCII
    int mathz = 'A' + '\t';  // 'A' (65) + '\t' (11), store the sum as an integer
    printf("A(65) + \\t(11) = %i\n", mathz );  // Print the result as the numeric sum

    return 0;
}

