#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;
int size = 0;
int capacity = 0;

void display();
void insertAtBeginning(int value);
void insertAtEnd(int value);
void insertAtPosition(int pos, int value);
void addSingleNode();
void addMultipleNodes();
void resizeArray();
void deleteAtBeginning();
void deleteAtEnd();
void deleteAtPosition(int pos);
void deleteValue(int value);
void searchValue(int value);
void deleteMenu();

int main() {
    int choice;

    while (1) {
        printf("\n=== Dynamic Array Menu ===\n");
        printf("1. Add Single Node\n");
        printf("2. Add Multiple Nodes\n");
        printf("3. Delete Node\n");
        printf("4. Search Value\n");
        printf("5. Display Array\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addSingleNode();
                break;
            case 2:
                addMultipleNodes();
                break;
            case 3:
                deleteMenu();
                break;
            case 4:
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    int val;
                    printf("Enter value to search: ");
                    scanf("%d", &val);
                    searchValue(val);
                }
                break;
            case 5:
                display();
                break;
            case 6:
                free(arr);
                printf("Memory freed. Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void display() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array (%d elements): ", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void resizeArray() {
    if (capacity == 0) capacity = 1;
    else capacity *= 2;
    arr = (int*)realloc(arr, capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
}

void insertAtBeginning(int value) {
    if (size == capacity) resizeArray();
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    size++;
}

void insertAtEnd(int value) {
    if (size == capacity) resizeArray();
    arr[size++] = value;
}

void insertAtPosition(int pos, int value) {
    if (pos < 0 || pos > size) {
        printf("Invalid position! Must be between 0 and %d\n", size);
        return;
    }
    if (size == capacity) resizeArray();
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
}

void addSingleNode() {
    int value, pos, subchoice;
    printf("\n--- Add Single Node ---\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Insert at Position\n");
    printf("Enter sub-choice: ");
    scanf("%d", &subchoice);
    switch (subchoice) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            insertAtBeginning(value);
            printf("Value %d inserted at beginning.\n", value);
            break;
        case 2:
            printf("Enter value: ");
            scanf("%d", &value);
            insertAtEnd(value);
            printf("Value %d inserted at end.\n", value);
            break;
        case 3:
            printf("Enter position (0 to %d): ", size);
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &value);
            insertAtPosition(pos, value);
            break;
        default:
            printf("Invalid sub-choice!\n");
    }
}

void addMultipleNodes() {
    int n, i, value, subchoice;
    printf("\n--- Add Multiple Nodes ---\n");
    printf("1. Insert all at Beginning\n");
    printf("2. Insert all at End\n");
    printf("3. Insert at Specific Positions\n");
    printf("Enter sub-choice: ");
    scanf("%d", &subchoice);
    printf("How many nodes to add? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of nodes must be positive!\n");
        return;
    }
    switch (subchoice) {
        case 1:
            for (i = 0; i < n; i++) {
                printf("Enter value %d: ", i + 1);
                scanf("%d", &value);
                insertAtBeginning(value);
            }
            printf("%d nodes inserted at beginning.\n", n);
            break;
        case 2:
            for (i = 0; i < n; i++) {
                printf("Enter value %d: ", i + 1);
                scanf("%d", &value);
                insertAtEnd(value);
            }
            printf("%d nodes inserted at end.\n", n);
            break;
        case 3:
            for (i = 0; i < n; i++) {
                int pos;
                printf("Enter position for node %d (0 to %d): ", i + 1, size);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtPosition(pos, value);
            }
            printf("%d nodes inserted at specified positions.\n", n);
            break;
        default:
            printf("Invalid sub-choice!\n");
    }
}

void deleteAtBeginning() {
    if (size == 0) {
        printf("Array is empty! Cannot delete.\n");
        return;
    }
    printf("Deleted %d from beginning.\n", arr[0]);
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void deleteAtEnd() {
    if (size == 0) {
        printf("Array is empty! Cannot delete.\n");
        return;
    }
    printf("Deleted %d from end.\n", arr[size - 1]);
    size--;
}

void deleteAtPosition(int pos) {
    if (size == 0) {
        printf("Array is empty! Cannot delete.\n");
        return;
    }
    if (pos < 0 || pos >= size) {
        printf("Invalid position! Must be between 0 and %d\n", size - 1);
        return;
    }
    printf("Deleted %d from position %d.\n", arr[pos], pos);
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void deleteValue(int value) {
    int found = 0, i;
    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Value %d not found in array.\n", value);
        return;
    }
    printf("Deleted %d from position %d.\n", arr[i], i);
    for (int j = i; j < size - 1; j++) {
        arr[j] = arr[j + 1];
    }
    size--;
}

void searchValue(int value) {
    int found = 0;
    printf("Searching for %d: ", value);
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            if (!found) printf("Found at position(s): ");
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("Not found.\n");
    else printf("\n");
}

void deleteMenu() {
    int subchoice, pos, value;
    if (size == 0) {
        printf("Array is empty! Nothing to delete.\n");
        return;
    }
    printf("\n--- Delete Node ---\n");
    printf("1. Delete from Beginning\n");
    printf("2. Delete from End\n");
    printf("3. Delete from Position\n");
    printf("4. Delete by Value\n");
    printf("Enter sub-choice: ");
    scanf("%d", &subchoice);
    switch (subchoice) {
        case 1:
            deleteAtBeginning();
            break;
        case 2:
            deleteAtEnd();
            break;
        case 3:
            printf("Enter position (0 to %d): ", size - 1);
            scanf("%d", &pos);
            deleteAtPosition(pos);
            break;
        case 4:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            deleteValue(value);
            break;
        default:
            printf("Invalid sub-choice!\n");
    }
}
