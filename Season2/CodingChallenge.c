#include <stdio.h>
#include <math.h>

int main()
{
	double a;
	double b;

	printf("This app will calculate the hypotenuse of a right triangle. \n");

	// Get the firt number
	printf("Now enter the first value: ");
	//lf = double format character
	scanf("%lf", &a);
	// Get the second number
	printf("Now enter the second value: ");
	scanf("%lf", &b);

	// Calculate the hypotenuse
	 c = sqrt((a*a)+(b*b));

	//output the hypotenuse
	printf("The hypontenuse is %f\n", c);


	return 0;

}
