#include <stdio.h>

int main(){
	int money = 25;
	int bill = 15;

	int total = money -  - bill; // 25--15 = 25+15
	int x = 5;
    	int y = -x; // y will be -5
	int piecesOfPizza = 5;
	int numberOfEaters = 2;
	int leftover = piecesOfPizza% numberOfEaters; 
	printf("%i %i\n", total, y);
	printf("The leftOver of our pizza is:%i\n ", leftover);

	return 0;
}
