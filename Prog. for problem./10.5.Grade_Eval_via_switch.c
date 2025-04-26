#include<stdio.h>
#include<math.h>

int main (){
float a;
scanf("%f",&a);
int b;
b= ceil((a/10));
switch (b)
{
    case 10:
    printf("A");    break;
    case 9: 
    printf("B");    break;
    case 8:
    printf("C");    break;
    case 7:
    printf("D");    break;
    case 6:
    printf("E");    break;
    case 5:
    printf("F");    break;

    default:   
    printf("Fail ha chukh");   break;
}

    return 0;
}
