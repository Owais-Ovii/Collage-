/*
 * Stack using Array with Menu-Driven Operations
 * Supports: Push (single/multiple), pop, peek, search,
 *           display stack. Uses dynamic array with resizing.
 */

#include <stdio.h>
#include <stdlib.h>

int *stack = NULL;
int top = -1;
int capacity = 0;

void display();
void push(int value);
void pop();
int peek();
void searchValue(int value);
void pushSingle();
void pushMultiple();
void resizeStack();

int main() {
    int choice;

    while (1) {
        printf("\n=== Stack Menu (Array-Based) ===\n");
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
                if (top == -1) {
                    printf("Stack is empty!\n");
                } else {
                    printf("Top element: %d\n", peek());
                }
                break;
            case 5:
                if (top == -1) {
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
                free(stack);
                printf("Memory freed. Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void resizeStack() {
    if (capacity == 0) capacity = 1;
    else capacity *= 2;
    stack = (int*)realloc(stack, capacity * sizeof(int));
    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
}

void push(int value) {
    if (top + 1 == capacity) resizeStack();
    stack[++top] = value;
}

void pop() {
    if (top == -1) {
        printf("Stack is empty! Cannot pop.\n");
        return;
    }
    printf("Popped %d from stack.\n", stack[top--]);
}

int peek() {
    if (top == -1) return -1;
    return stack[top];
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack (top to bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void searchValue(int value) {
    int found = 0;
    printf("Searching for %d: ", value);
    for (int i = top; i >= 0; i--) {
        if (stack[i] == value) {
            if (!found) printf("Found at position(s) from top: ");
            printf("%d ", top - i);
            found = 1;
        }
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
