//The program gives the roots of a quaratic equation. The squroot function is capable of displaying roots of negative numbers as well without any 
//additional code in the main function for printing iota. Also, for a=0, the do while loop will again ask for input unless a!=0.


#include <stdio.h>
#include <math.h>


int main() {
printf("For quadratic, ax^2+bx+c=0\n");
float a;
do
{
    printf("Input the value of: a \n");
    scanf("%f",&a);
} while (!a);


float b;
printf("Input the value of: b \n");
scanf("%f",&b);


float c;
printf("Input the value of: c \n");
scanf("%f",&c);

float d=(b*b)-(4*a*c);
if(d<0){
    d=-d;
    printf("First root of the equation is %fi\n",((-b)/(2*a))+(sqrtf(d)/(2*a)));
    printf("Second root of the equation is %fi",((-b)/(2*a))-(sqrtf(d)/(2*a)));
}
else {
    printf("First root of the equation is %f\n",((-b)/(2*a))+(sqrtf(d)/(2*a)));
    printf("Second root of the equation is %f",((-b)/(2*a))-(sqrtf(d)/(2*a)));
}
return 0;
}
