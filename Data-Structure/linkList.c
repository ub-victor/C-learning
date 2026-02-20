#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    
    // Create first node
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    
    // Create second node
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    
    // Assign data to first node
    first->data = 10;
    first->next = second;
    
    // Assign data to second node
    second->data = 20;
    second->next = NULL;
    
    // Print the linked list
    struct Node* temp = first;
    
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    
    printf("NULL\n");
    
    // Free allocated memory
    free(first);
    free(second);

    return 0;
}
