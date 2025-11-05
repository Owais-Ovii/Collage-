/*
 * Stack using Singly Linked List
 * Supports: Push (single/multiple), pop, peek, search,
 *           display stack. Uses dynamic nodes with malloc.
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void display();
void push(int value);
void pop();
int peek();
void searchValue(int value);
void pushSingle();
void pushMultiple();

int main() {
    int choice;

    while (1) {
        printf("\n=== Stack Menu (Linked List) ===\n");
        printf("1. Push Single Value\n");
        printf("2. Push Multiple Values\n");
        printf("3. Pop\n");
        printf("4. Peek (Top)\n");
        printf("5. Search Value\n");
        printf("6. Display Stack\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                pushSingle();
                break;
            case 2:
                pushMultiple();
                break;
            case 3:
                pop();
                break;
            case 4:
                if (top == NULL) {
                    printf("Stack is empty!\n");
                } else {
                    printf("Top element: %d\n", peek());
                }
                break;
            case 5:
                if (top == NULL) {
                    printf("Stack is empty!\n");
                } else {
                    int val;
                    printf("Enter value to search: ");
                    scanf("%d", &val);
                    searchValue(val);
                }
                break;
            case 6:
                display();
                break;
            case 7:
                struct Node* temp;
                while (top != NULL) {
                    temp = top;
                    top = top->next;
                    free(temp);
                }
                printf("Memory freed. Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty! Cannot pop.\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped %d from stack.\n", top->data);
    top = top->next;
    free(temp);
}

int peek() {
    if (top == NULL) return -1;
    return top->data;
}

void display() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack (top to bottom): ");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void searchValue(int value) {
    struct Node* temp = top;
    int pos = 0, found = 0;
    printf("Searching for %d: ", value);
    while (temp != NULL) {
        if (temp->data == value) {
            if (!found) printf("Found at position(s) from top: ");
            printf("%d ", pos);
            found = 1;
        }
        temp = temp->next;
        pos++;
    }
    if (!found) printf("Not found.\n");
    else printf("\n");
}

void pushSingle() {
    int value;
    printf("Enter value to push: ");
    scanf("%d", &value);
    push(value);
    printf("Value %d pushed to stack.\n", value);
}

void pushMultiple() {
    int n, i, value;
    printf("How many values to push? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number must be positive!\n");
        return;
    }
    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }
    printf("%d values pushed to stack.\n", n);
}
