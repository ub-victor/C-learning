#include <stdio.h>

int main(){

	char name[31];
	printf("Enter your name: ");
	scanf("%s!", name);

	printf("Hello %s!\nYou look very nice today.\n", name);
	return 0;	
}
