#include <stdio.h>

int main() {

    float marks;
    printf("Input the value of marks  \n");
    scanf("%f",&marks);

    if (marks>=90)
    {
        printf("Your grade is A");
    }
    else if (marks>=80)
    {
        printf("Your grade is B");
    }
    
    else if (marks>=70)
    {
        printf("Your grade is C");
    }
    else if (marks>=60)
    {
        printf("Your grade is D");
    }
    else if (marks>=50)
    {
        printf("Your grade is E");
    }
    else{
        printf("Your grade is F");
    }
    return 0;
}