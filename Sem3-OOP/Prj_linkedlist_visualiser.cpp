#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void visualizeList(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL) {
        printf("+-----+   ");
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        printf("| %3d |", temp->data);
        if (temp->next != NULL)
            printf("-> ");
        else
            printf("   ");
        temp = temp->next;
    }
    printf("NULL\n");

    temp = head;
    while (temp != NULL) {
        printf("+-----+   ");
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    appendNode(&head, 10);
    appendNode(&head, 20);
    appendNode(&head, 30);
    appendNode(&head, 40);

    printf("Linked List Visualization:\n\n");
    visualizeList(head);

    return 0;
}
