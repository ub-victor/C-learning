#include <stdio.h>

int main(){
    char ASCII;
    printf("Please enter a character: ");
    scanf("%c", &ASCII);  // Read character input
    printf("%i\n", ASCII); // Print the ASCII value of the character

    int integer;
    // Use a space before %i to consume any leftover newline or whitespace
    printf("Please enter an integer between 0 - 127: ");
    scanf(" %i", &integer);  // Space before %i to skip any leftover newline
    printf("%c\n", integer);  // Print the character corresponding to the ASCII value

    // Math with ASCII
    char mathz = 'A' + '\t';  // 'A' (65) + '\t' (11)
    printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz );  // Print result

    return 0;
}

