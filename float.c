#include <stdio.h>

int main()
{

	double radius;

	printf("Please enter a radius: ");
	scanf("%lf", &radius); 

	double area = 3.14159 * (radius * radius);

	printf("The area of a circle with radius %.2f is %.2f\n", radius, area);

	return 0;
}
