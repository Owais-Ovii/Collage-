#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Task {
    int id;
    char desc[100];
    int status; // 0 = Pending, 1 = Done
    struct Task* next;
};

struct Task* createTask(int id, char desc[]) {
    struct Task* newTask = (struct Task*) malloc(sizeof(struct Task));
    newTask->id = id;
    strcpy(newTask->desc, desc);
    newTask->status = 0;
    newTask->next = NULL;
    return newTask;
}

void addTask(struct Task** head, int id, char desc[]) {
    struct Task* newTask = createTask(id, desc);
    if (*head == NULL) {
        *head = newTask;
        return;
    }
    struct Task* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newTask;
}

void displayTasks(struct Task* head) {
    if (head == NULL) {
        printf("\nNo tasks found!\n");
        return;
    }
    struct Task* temp = head;
    printf("\nTo-Do List Visualization:\n\n");

    while (temp != NULL) {
        printf("+----------------------------------+   ");
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        printf("| ID: %-3d %-20s |", temp->id, temp->status ? "[Done]" : "[Pending]");
        if (temp->next != NULL) printf("-> ");
        else printf("   ");
        temp = temp->next;
    }
    printf("NULL\n");

    temp = head;
    while (temp != NULL) {
        printf("| %-30s |   ", temp->desc);
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        printf("+----------------------------------+   ");
        temp = temp->next;
    }
    printf("\n");
}

void markDone(struct Task* head, int id) {
    struct Task* temp = head;
    while (temp != NULL) {
        if (temp->id == id) {
            temp->status = 1;
            printf("Task %d marked as Done!\n", id);
            return;
        }
        temp = temp->next;
    }
    printf("Task %d not found!\n", id);
}

void deleteTask(struct Task** head, int id) {
    struct Task* temp = *head, *prev = NULL;

    if (temp != NULL && temp->id == id) {
        *head = temp->next;
        free(temp);
        printf("Task %d deleted!\n", id);
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Task %d not found!\n", id);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Task %d deleted!\n", id);
}

int main() {
    struct Task* head = NULL;
    int choice, id = 1;
    char desc[100];

    while (1) {
        printf("\n===== To-Do Task Manager =====\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Done\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter task description: ");
                fgets(desc, sizeof(desc), stdin);
                desc[strcspn(desc, "\n")] = 0;
                addTask(&head, id++, desc);
                break;
            case 2:
                displayTasks(head);
                break;
            case 3:
                printf("Enter Task ID to mark as Done: ");
                scanf("%d", &choice);
                markDone(head, choice);
                break;
            case 4:
                printf("Enter Task ID to delete: ");
                scanf("%d", &choice);
                deleteTask(&head, choice);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
