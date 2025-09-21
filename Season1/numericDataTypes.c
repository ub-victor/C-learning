#include <stdio.h>


int main(){
	//  250000 = 2.5 * 10 ^ 5
	// 24000 = 2.4 * 10^4
	// .000045 = 4.5 * 10 ^ -5
	double dog = 2.5e6; // but here as we write manually it called as hardcoding
	printf("We have %f\n %e\n%g\n of dogs\n", dog, dog, dog);
	/*Conversion Characters
	________________________

	%f - Decimal notation 
	%e - Scientific notation
	%g - Coputer decides : Depending to the size of the exponant
		< -4 : If the exponant is less than -4 : 
	        	the Computer put it in scientific natation
			OR
		if the exponant is great than 5 
		Otherwise it will use decimal notation

	*/
	return 0;
}
