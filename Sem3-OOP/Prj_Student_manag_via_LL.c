#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
    struct Student* next;
};

struct Student* createStudent(int roll, char name[], float marks) {
    struct Student* newStudent = (struct Student*) malloc(sizeof(struct Student));
    newStudent->roll = roll;
    strcpy(newStudent->name, name);
    newStudent->marks = marks;
    newStudent->next = NULL;
    return newStudent;
}

void appendStudent(struct Student** head, int roll, char name[], float marks) {
    struct Student* newStudent = createStudent(roll, name, marks);
    if (*head == NULL) {
        *head = newStudent;
        return;
    }
    struct Student* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newStudent;
}

void visualizeStudents(struct Student* head) {
    struct Student* temp = head;

    while (temp != NULL) {
        printf("+-------------------------+   ");
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        printf("| Roll: %-4d Name: %-6s |", temp->roll, temp->name);
        if (temp->next != NULL)
            printf("-> ");
        else
            printf("   ");
        temp = temp->next;
    }
    printf("NULL\n");

    temp = head;
    while (temp != NULL) {
        printf("| Marks: %-6.2f        |   ", temp->marks);
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        printf("+-------------------------+   ");
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Student* head = NULL;

    appendStudent(&head, 101, "Alice", 87.5);
    appendStudent(&head, 102, "Bob", 92.0);
    appendStudent(&head, 103, "Charlie", 76.3);
    appendStudent(&head, 104, "Diana", 81.4);

    printf("Student Management System (Linked List Visualization):\n\n");
    visualizeStudents(head);

    return 0;
}
