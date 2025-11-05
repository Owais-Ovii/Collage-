/*
 * Circular Queue using Array with Menu-Driven Operations
 * Supports: Enqueue (single/multiple), dequeue, front, rear,
 *           search value, display queue. Uses fixed-size circular
 *           array with wrap-around. No dynamic resizing.
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void display();
void enqueue(int value);
int dequeue();
int getFront();
int getRear();
void searchValue(int value);
void enqueueSingle();
void enqueueMultiple();
int isFull();
int isEmpty();

int main() {
    int choice;

    while (1) {
        printf("\n=== Circular Queue Menu (Fixed Size: %d) ===\n", MAX);
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
                if (isEmpty()) {
                    printf("Queue is empty! Cannot dequeue.\n");
                } else {
                    printf("Dequeued %d from queue.\n", dequeue());
                }
                break;
            case 4:
                if (isEmpty()) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Front element: %d\n", getFront());
                }
                break;
            case 5:
                if (isEmpty()) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Rear element: %d\n", getRear());
                }
                break;
            case 6:
                if (isEmpty()) {
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
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

int isEmpty() {
    return front == -1;
}

int isFull() {
    return (rear + 1) % MAX == front;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d.\n", value);
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    queue[rear] = value;
}

int dequeue() {
    if (isEmpty()) return -1;

    intubation
    int value = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    return value;
}

int getFront() {
    if (isEmpty()) return -1;
    return queue[front];
}

int getRear() {
    if (isEmpty()) return -1;
    return queue[rear];
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue (front to rear): ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

void searchValue(int value) {
    if (isEmpty()) return;

    int found = 0;
    int pos = 0;
    int i = front;
    printf("Searching for %d: ", value);
    while (1) {
        if (queue[i] == value) {
            if (!found) printf("Found at position(s) from front: ");
            printf("%d ", pos);
            found = 1;
        }
        if (i == rear) break;
        i = (i + 1) % MAX;
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
    if (!isFull() && !isEmpty())
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
    printf("Attempted to enqueue %d values.\n", n);
}
