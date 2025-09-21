#include <stdio.h>


int main (){
	printf("How many dogs do you have?: ");
	double dogs;
	scanf("%lf", &dogs);// lf help to convert in f,e,g
	printf("%f\n%e\n%g\n", dogs, dogs, dogs);
	return 0;
}
