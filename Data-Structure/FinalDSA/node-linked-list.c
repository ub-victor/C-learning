/*
Question 3: Count nodes in Linked List
Explaination:
	You are given the head of singly linked list. count how many noded exist (traverse untill NUL). for 1->2->2->3-> NULL, return 3. 
*/

inf count-node(Node * head){
	int count = 0  // initialixe counter to 0
	Note* current = head; // Start from the head node

	// Loop whike current node is not NULL
	while (current !== NULL){
		count ++; // increase count for this node
		current = current->next // Move to the next node
	
	}

	return count;   // Return total number of nodes

}
