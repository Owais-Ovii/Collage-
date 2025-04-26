#include <stdio.h>

int main() {

 
    int a;
    printf("Input the value of a  \n");
    scanf("%d",&a);
    
    int b;
    printf("Input the value of b \n");
    scanf("%d",&b);
    printf("Initial values are: a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swaped values are: a=%d and b=%d",a,b);

    return 0;
}
