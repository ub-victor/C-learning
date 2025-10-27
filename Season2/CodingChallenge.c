#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c; // ✅ Declare all variables together

    printf("This program calculates the hypotenuse of a right triangle.\n");

    // Get the first side
    printf("Enter the first side (a): ");
    scanf("%lf", &a);

    // Get the second side
    printf("Enter the second side (b): ");
    scanf("%lf", &b);

    // Calculate the hypotenuse
    c = sqrt((a * a) + (b * b));

    // Display the result
    printf("The hypotenuse is: %.2f\n", c);

    return 0;

}

