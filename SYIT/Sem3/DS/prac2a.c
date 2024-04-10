#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int data) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;

    newNode->next = *head;
    
    *head = newNode;
}


void displayReverse(struct Node* node) {
    
    if (node == NULL) {
        return;
    }

    displayReverse(node->next);

    printf("%d ", node->data);
}

void freeLinkedList(struct Node* node) {
    while (node != NULL) {
        struct Node* temp = node;
        node = node->next;
        free(temp);
    }
}

int main() {
    
    struct Node* head = NULL;

    
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);
    insertAtBeginning(&head, 20);

    
    printf("Linked list elements in reverse order: ");
    displayReverse(head);
    printf("\n");

    
    freeLinkedList(head);

    return 0;
} 
