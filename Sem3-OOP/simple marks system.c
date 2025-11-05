#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average, percentage;
    char grade;

    printf("Enter marks of 5 subjects (out of 100):\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];  
    }

    average = total / 5.0;
    percentage = (total / 500.0) * 100;  

    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 75)
        grade = 'B';
    else if(percentage >= 60)
        grade = 'C';
    else if(percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}