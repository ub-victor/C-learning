#include <stdio.h>

int main()
{
int radius;

printf("Please enter a radius: ");
scanf("%i", &radius);

double area = 3.14159 * (radius * radius);

printf("The area of a circle with radius %i is %.2f\n", radius, area);
}
