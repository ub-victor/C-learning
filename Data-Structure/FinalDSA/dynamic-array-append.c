/*
Question 2: Dynamic Array Append

Explaination
We havea dynamic array structure DynArray with an integer pointer data, current site , and total capacity. The function dyn_append adds a new value at the end. If size == capacity, we must double the capacity , reallocate the buffer, then insert. Example: Catacity 2, size 2 -> append -> new capacity 4, size 3

The question  says to make a dynamic array which is normally impossible cuz in C array length is set when it get created , Here the question expect us to use realloc() to create a bigger memory copy old values then add the new value we want to add
- Size : how many elements currently exist
- Capacity : how many elements the array Can hold
(*da).size = 10;       // dereference then access field
// or more commonly:
da->size = 10;         // arrow operator does the same thing
*/
void dyn_append(DynArray* da, int value){
	// Check if the array is full
	if(da->size == da->capacity){
		// Double the capacity (if capcity was 0, set to 1)
		int new_capacity = (da->capacity ==0)? 1 : capacity *2;

		// Reallocate memory for the new capacity
		int* new_data = (*int)realloc(da->data, new_capacity * sizeof(int));

		// Update the capacity in the structure
		da-> capacity = new_capacity;
		
	}
	// Now there is space; insert thevalue at the end
	da->data[da->size]= value;

	da->size++;

}
