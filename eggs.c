#include <stdio.h>

int main ()
{
	printf("The number of eegs for the day: ");

	int eggs;
	scanf("%i", &eggs);

/*This is a type cast in some programming languages, like C++. It converts the variable eggs into a double data type before the division takes place. */
	double dozen = (double) eggs /12;

	printf("You have %.2f dozen eggs.\n", dozen);

	return 0;
}
