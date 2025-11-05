/*
 * Circular Singly Linked List with Menu-Driven Operations
 * Supports: Add single/multiple nodes at begin/end/position,
 *           delete from begin/end/position/by value, search value,
 *           display list. Uses dynamic nodes with malloc.
 *           Last node points back to first.
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void display();
void insertAtBeginning(int value);
void insertAtEnd(int value);
void insertAtPosition(int pos, int value);
void addSingleNode();
void addMultipleNodes();
void deleteAtBeginning();
void deleteAtEnd();
void deleteAtPosition(int pos);
void deleteValue(int value);
void searchValue(int value);
void deleteMenu();

int main() {
    int choice;

    while (1) {
        printf("\n=== Circular Singly Linked List Menu ===\n");
        printf("1. Add Single Node\n");
        printf("2. Add Multiple Nodes\n");
        printf("3. Delete Node\n");
        printf("4. Search Value\n");
        printf("5. Display List\n");
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
                if (head == NULL) {
                    printf("List is empty!\n");
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
                struct Node* temp;
                if (head != NULL) {
                    struct Node* current = head;
                    do {
                        temp = current;
                        current = current->next;
                        free(temp);
                    } while (current != head);
                }
                printf("Memory freed. Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Circular List: ");
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    struct Node* last = head;
    while (last->next != head) {
        last = last->next;
    }
    newNode->next = head;
    last->next = newNode;
    head = newNode;
}

void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    struct Node* last = head;
    while (last->next != head) {
        last = last->next;
    }
    last->next = newNode;
    newNode->next = head;
}

void insertAtPosition(int pos, int value) {
    if (pos < 0) {
        printf("Invalid position! Must be >= 0\n");
        return;
    }
    if (pos == 0) {
        insertAtBeginning(value);
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node* temp = head;
    for (int i = 0; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    if (temp->next == head && pos > 0) {
        printf("Position %d is out of bounds!\n", pos);
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
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
            printf("Enter position (0 for beginning): ");
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
                printf("Enter position for node %d (0 for beginning): ", i + 1);
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
    if (head == NULL) {
        printf("List is empty! Cannot delete.\n");
        return;
    }
    if (head->next == head) {
        printf("Deleted %d from beginning.\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct Node* last = head;
    while (last->next != head) {
        last = last->next;
    }
    struct Node* temp = head;
    printf("Deleted %d from beginning.\n", head->data);
    head = head->next;
    last->next = head;
    free(temp);
}

void deleteAtEnd() {
    if (head == NULL) {
        printf("List is empty! Cannot delete.\n");
        return;
    }
    if (head->next == head) {
        printf("Deleted %d from end.\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }
    printf("Deleted %d from end.\n", temp->data);
    prev->next = head;
    free(temp);
}

void deleteAtPosition(int pos) {
    if (head == NULL) {
        printf("List is empty! Cannot delete.\n");
        return;
    }
    if (pos < 0) {
        printf("Invalid position!\n");
        return;
    }
    if (pos == 0) {
        deleteAtBeginning();
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;
    int i;
    for (i = 0; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (i < pos || temp->next == head && pos > 0) {
        printf("Position %d is out of bounds!\n", pos);
        return;
    }

    printf("Deleted %d from position %d.\n", temp->data, pos);
    prev->next = temp->next;
    free(temp);
}

void deleteValue(int value) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    // Special case: head has the value
    if (head->data == value) {
        deleteAtBeginning();
        return;
    }

    do {
        prev = temp;
        temp = temp->next;
        if (temp->data == value) {
            printf("Deleted %d from list.\n", value);
            prev->next = temp->next;
            free(temp);
            return;
        }
    } while (temp != head);

    printf("Value %d not found in list.\n", value);
}

void searchValue(int value) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;
    int pos = 0, found = 0;
    printf("Searching for %d: ", value);
    do {
        if (temp->data == value) {
            if (!found) printf("Found at position(s): ");
            printf("%d ", pos);
            found = 1;
        }
        temp = temp->next;
        pos++;
    } while (temp != head);
    if (!found) printf("Not found.\n");
    else printf("\n");
}

void deleteMenu() {
    int subchoice, pos, value;
    if (head == NULL) {
        printf("List is empty! Nothing to delete.\n");
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
            printf("Enter position (0 for beginning): ");
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
