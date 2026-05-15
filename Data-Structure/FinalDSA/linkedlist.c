#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}Node

int main(){
	// Create first node
	Node* head = malloc(sizeof(Node));
	head->data = 10;
	head->next = NULL;

	// Create second node
	Node* second  = malloc(sizedof(Node));
	second->data = 10;
	second->next = NULL;

	//link them
	head->next = second;

	return 0;
}
