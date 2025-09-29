
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Employee* next;
};

struct Employee* createEmployee(int id, char name[], float salary) {
    struct Employee* newEmp = (struct Employee*) malloc(sizeof(struct Employee));
    newEmp->id = id;
    strcpy(newEmp->name, name);
    newEmp->salary = salary;
    newEmp->next = NULL;
    return newEmp;
}

void appendEmployee(struct Employee** head, int id, char name[], float salary) {
    struct Employee* newEmp = createEmployee(id, name, salary);
    if (*head == NULL) {
        *head = newEmp;
        return;
    }
    struct Employee* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newEmp;
}

void visualizeEmployees(struct Employee* head) {
    struct Employee* temp = head;

    while (temp != NULL) {
        printf("+---------------------------+   ");
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        printf("| ID: %-4d Name: %-8s |", temp->id, temp->name);
        if (temp->next != NULL)
            printf("-> ");
        else
            printf("   ");
        temp = temp->next;
    }
    printf("NULL\n");

    temp = head;
    while (temp != NULL) {
        printf("| Salary: %-10.2f    |   ", temp->salary);
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        printf("+---------------------------+   ");
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Employee* head = NULL;

    appendEmployee(&head, 201, "John", 55000.50);
    appendEmployee(&head, 202, "Alice", 72000.00);
    appendEmployee(&head, 203, "Bob", 48000.75);
    appendEmployee(&head, 204, "Diana", 60000.20);

    printf("Employee Management System (Linked List Visualization):\n\n");
    visualizeEmployees(head);

    return 0;
}
