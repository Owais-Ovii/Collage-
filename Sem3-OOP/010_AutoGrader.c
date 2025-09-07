#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average, percentage;
    char grade;


    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

   
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input! Marks should be between 0 and 100.\n");
            return 1; 
        }

        total += marks[i];
    }

    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    printf("\n--- Results ---\n");
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
