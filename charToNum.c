#include <stdio.h>

int main(){

	char letter = 'V';
	int ascii = (int)letter; // cast char to int
				 
	printf("Character: %c\n", letter);
	printf("ASCII code of %c is %i\n", letter, ascii);


	return 0;
}
