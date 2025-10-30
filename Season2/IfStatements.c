#include <stdio.h>
#include <stdbool.h>

int main()
{

	bool pizzaIsHealthy;
	int temp;
	printf("Do you believe in the power of the pizza? 1 is true and 0 is false: ");
	scanf("%d", &temp);
	pizzaIsHealthy = temp;

	if(pizzaIsHealthy){// if(true){}

		printf("Welcome to my pizza App\n");

	}else{
		printf("Oh! You do not believe in Pizza's power!")
	}
	

	return 0;
}
