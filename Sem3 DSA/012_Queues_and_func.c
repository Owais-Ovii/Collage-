/*
 * Queue using Array with Menu-Driven Operations
 * Supports: Enqueue (single/multiple), dequeue, front, rear,
 *           search value, display queue. Uses circular array
 *           with dynamic resizing (doubles capacity).
 */

#include <stdio.h>
#include <stdlib.h>

int *queue = NULL;
int front = -1;
int rear = -1;
int capacity = 0;
int size = 0;

void display();
void enqueue(int value);
int dequeue();
int getFront();
int getRear();
void searchValue(int value);
void enqueueSingle();
void enqueueMultiple();
void resizeQueue();

int main() {
    int choice;

    while (1) {
        printf("\n=== Queue Menu (Circular Array-Based) ===\n");
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
                if (size == 0) {
                    printf("Queue is empty! Cannot dequeue.\n");
                } else {
                    printf("Dequeued %d from queue.\n", dequeue());
                }
                break;
            case 4:
                if (size == 0) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Front element: %d\n", getFront());
                }
                break;
            case 5:
                if (size == 0) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Rear element: %d\n", getRear());
                }
                break;
            case 6:
                if (size == 0) {
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
                free(queue);
                printf("Memory freed. Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void resizeQueue() {
    int old_capacity = capacity;
    if (capacity == 0) capacity = 1;
    else capacity *= 2;

    queue = (int*)realloc(queue, capacity * sizeof(int));
    if (queue == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Realign elements if front > rear (wrapped around)
    if (front > rear && size > 0) {
        for (int i = 0; i <= rear; i++) {
            queue[old_capacity + i] = queue[i];
        }
        rear += old_capacity;
    }
}

void enqueue(int value) {
    if (size == capacity) resizeQueue();

    if (size == 0) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % capacity;
    }
    queue[rear] = value;
    size++;
}

int dequeue() {
    if (size == 0) return -1;

    int value = queue[front];
    if (size == 1) {
        front = rear = -1;
    } else {
        front = (front + 1) % capacity;
    }
    size--;
    return value;
}

int getFront() {
    if (size == 0) return -1;
    return queue[front];
}

int getRear() {
    if (size == 0) return -1;
    return queue[rear];
}

void display() {
    if (size == 0) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue (front to rear): ");
    int i = front;
    for (int count = 0; count < size; count++) {
        printf("%d ", queue[i]);
        i = (i + 1) % capacity;
    }
    printf("\n");
}

void searchValue(int value) {
    if (size == 0) return;

    int found = 0;
    int pos = 0;
    int i = front;
    printf("Searching for %d: ", value);
    for (int count = 0; count < size; count++) {
        if (queue[i] == value) {
            if (!found) printf("Found at position(s) from front: ");
            printf("%d ", pos);
            found = 1;
        }
        i = (i + 1) % capacity;
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
