// Doctor Office
// 1. Add a patient
// 2. View a patient
// 3. Search patients
// 4. exit

#include <stdio.h>

int main(){

	printf("Choose a menu option 1-4:\n");
	printf("1. add a patient\n");
	printf("2. view a patien\n");
	printf("3. search patiens\n");
	printf("4. exit\n");

	int input;
	scanf("%d", &input);

	if(input == 1){
		printf("Add a patient\n");
	}else if(input == 2){
		printf("View a patient\n");	
	}else if(input == 3)
		{
		printf("Search patients\n");
	}else if(input == 4) {
		printf("Exiting...\n");
	}else{
		printf("Incorrect input\n");
	}

	return (0);

}
