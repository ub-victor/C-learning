#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {

    Node n1;
    Node n2;

    n1.data = 10;
    n1.next = &n2;

    n2.data = 20;
    n2.next = NULL;

    printf("%d\n", n1.data);
    printf("%d\n", n1.next->data);

    return 0;
}
