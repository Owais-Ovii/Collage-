/* To create a program using switch that grades students on the basis of marks.
*/ 
#include <stdio.h>

int main() {

    float marks;
    int n;
    printf("Input the value of marks \n");
    scanf("%f",&marks);
    
    n=marks/10;
    switch (n)
    {
    case 10:
        printf("Your grade is A");
        break;
    case 9:
        printf("Your grade is A");
        break;
    case 8:
        printf("Your grade is B");
        break;
    case 7:
        printf("Your grade is C");
        break;
    case 6: 
        printf("Your grade is D");
        break;
    case 5:
        printf ("Your grade is E");
        break;

    default:
    printf("Your grade is F");
        break;
    }

    return 0;

}
