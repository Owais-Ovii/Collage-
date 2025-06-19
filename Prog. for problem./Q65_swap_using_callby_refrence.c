//To Swap numbers using function via call by refrence
#include <stdio.h>

void swap(int* a, int* b)
{


int c;
c= *a;
*a=*b;
*b=c;

}


int main() {

    int a,b;
    printf("\nEnter n1:");
    scanf("%d",&a);

    printf("\nEnter n2:");
    scanf("%d",&b);

    printf("\nFor a = %d and b = %d:",a,b);
    
    swap(&a,&b);

    printf("\nAfter swap a = %d and b = %d:",a,b);


    return 0;
}
