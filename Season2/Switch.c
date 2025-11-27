#include <stdio.h>

int main (){
	int slice;
	printf("Please choose a slice od pizza (1-4) \n");
	scanf("%d", &slice);

	switch(slice)
	{
		case 1: 
			printf("You chose the first \n ");
			break;
		case 2:
			printf("You chose the second \n ");
			break;
		case 3: 
			printf("You chose the third \n");
			break;
		case 4:
			printf("You chose the forth \n");
			break;
		default:
			printf("Bad choice you have to select 1-4\n ");
			break;                                      		
	}
	return 0;
}
