#include <stdio.h>

int main ()
{
	int a;
	int b;

	printf("Please enter a 1st number: ");
	scanf("%i", &a);
	
	printf("Please enter a 2rd number: ");
        scanf("%i", &b);

	int c = a + b ;

	printf("The sum of %i plus %i is %i\n", a, b, c);

	return 0;

}
