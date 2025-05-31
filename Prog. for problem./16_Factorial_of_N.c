#include<stdio.h>

int main(){


int num;
printf("\nFor N!, Enter the value of N:  \n");
scanf("%d",&num);

int fac=1;
printf("\nFor Factorial %d! = ",num);
for(int i=1;i<=num;num--){

printf("%d",num);

if (num>1){
    printf(" * ");

}


fac*=num;

}

printf(" = %d",fac);

    return 0; 
}