#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(NULL));
	int randomNumber = rand();

	printf("The randomNumber is: %d\n", randomNumber); 

}
