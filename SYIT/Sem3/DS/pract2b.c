#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void searchAndDisplay(struct Node* head, int target) {
    struct Node* current = head;
    int found = 0;

    while (current != NULL) {
        if (current->data == target) {
            printf("Element %d found in the linked list.\n", target);
            found = 1;
        }
        current = current->next;
    }

    if (!found) {
        printf("Element %d not found in the linked list.\n", target);
    }
}


void freeLinkedList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;

    
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    
    int target1 = 30;
    int target2 = 25;

    searchAndDisplay(head, target1);
    searchAndDisplay(head, target2);

    
    freeLinkedList(head);

    return 0;
}

