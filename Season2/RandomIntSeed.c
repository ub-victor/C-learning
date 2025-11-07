#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int maxValue = 5;
	srand(time(NULL));
	int randomNumber = rand() % maxValue +1;

	printf("Guess a number 0 - 5: "); 
	int input;
	scanf("%d", &input);

	if(input == randomNumber){
		printf("You win\n");
	}else{
		printf("You don't win! Try again!\n");
	}
}

//5H10: 37
