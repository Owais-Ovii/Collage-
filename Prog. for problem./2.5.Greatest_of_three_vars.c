#include <stdio.h>
int main(){

float a,b,c;

printf("Enter value of the first number:");
scanf("%f",&a);

printf("Enter value of the second number:");
scanf("%f",&b);

printf("Enter value of the third number:");
scanf("%f",&c);

if(a>b){

if(a>c){
printf("%f is the greatest.",a);
}

else{
printf("%f is the greatest.",c);
}

}
else{

if(b>c){
printf("%f is the greatest.",b);
}
else{
printf("%f is the greatest.",c);
}
}

return 0;


}
