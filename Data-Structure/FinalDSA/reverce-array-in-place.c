/*
Question 1: Reverse Array in place

Explaination: 
You are given an integer array and its length.you must reverse the order of elements without
using extra array(in-place). For example, [1,2,3,4,5] becomes [5,4,3,2,1]. you can use a 
temporary variable for swapping.

Step-by-step Visualization

[1, 2, 3, 4, 5]
 ^
             ^
 left       right



*/

void reverse_array(int* arr, int n){
	// Initialize two  pointers: left at start, right at end
	int left = 0;
	int right = n-1;

	//Continue swapping untill pointers meet or cross
	while(left < right){
		// Swap arr[left] and arr[right] using a temporary variable
		int temp = arr[left]; // Store left value in temp
		arr[left] = arr[right] //Copy right value to left position
		arr[right] = temp;  // copy saved  letf value to right position

		//move  pointers toward the certer
		left++
		right --;
	}
}
