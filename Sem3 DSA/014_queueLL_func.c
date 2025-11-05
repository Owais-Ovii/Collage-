/*
 * Queue using Singly Linked List
 * Supports: Enqueue (single/multiple), dequeue, front, rear,
 *           search value, display queue. Uses dynamic nodes.
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void display();
void enqueue(int value);
int dequeue();
int getFront();
int getRear();
void searchValue(int value);
void enqueueSingle();
void enqueueMultiple();

int main() {
    int choice;

    while (1) {
        printf("\n=== Queue Menu (Linked List) ===\n");
        printf("1. Enqueue Single Value\n");
        printf("2. Enqueue Multiple Values\n");
        printf("3. Dequeue\n");
        printf("4. Front Element\n");
        printf("5. Rear Element\n");
        printf("6. Search Value\n");
        printf("7. Display Queue\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueueSingle();
                break;
            case 2:
                enqueueMultiple();
                break;
            case 3:
                if (front == NULL) {
                    printf("Queue is empty! Cannot dequeue.\n");
                } else {
                    printf("Dequeued %d from queue.\n", dequeue());
                }
                break;
            case 4:
                if (front == NULL) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Front element: %d\n", getFront());
                }
                break;
            case 5:
                if (rear == NULL) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Rear element: %d\n", getRear());
                }
                break;
            case 6:
                if (front == NULL) {
                    printf("Queue is empty!\n");
                } else {
                    int val;
                    printf("Enter value to search: ");
                    scanf("%d", &val);
                    searchValue(val);
                }
                break;
            case 7:
                display();
                break;
            case 8:
                struct Node* temp;
                while (front != NULL) {
                    temp = front;
                    front = front->next;
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

void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

int dequeue() {
    if (front == NULL) return -1;

    struct Node* temp = front;
    int value = front->data;
    front = front->next;
    if (front == NULL) rear = NULL;
    free(temp);
    return value;
}

int getFront() {
    if (front == NULL) return -1;
    return front->data;
}

int getRear() {
    if (rear == NULL) return -1;
    return rear->data;
}

void display() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue (front to rear): ");
    struct Node* temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void searchValue(int value) {
    struct Node* temp = front;
    int pos = 0, found = 0;
    printf("Searching for %d: ", value);
    while (temp != NULL) {
        if (temp->data == value) {
            if (!found) printf("Found at position(s) from front: ");
            printf("%d ", pos);
            found = 1;
        }
        temp = temp->next;
        pos++;
    }
    if (!found) printf("Not found.\n");
    else printf("\n");
}

void enqueueSingle() {
    int value;
    printf("Enter value to enqueue: ");
    scanf("%d", &value);
    enqueue(value);
    printf("Value %d enqueued to queue.\n", value);
}

void enqueueMultiple() {
    int n, i, value;
    printf("How many values to enqueue? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number must be positive!\n");
        return;
    }
    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        enqueue(value);
    }
    printf("%d values enqueued to queue.\n", n);
}
