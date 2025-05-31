#include<stdio.h>

int main(){


int num;
printf("\nFor sum of N natural numbers, Input the value of N:  \n");
scanf("%d",&num);

int sum=0;
printf("\nFor Series:");
for(int i=1;i<=num;i++){

printf("%d",i);

if(i<num){printf(" + ");}

sum+=i;

}

printf("\nSum:%d",sum);

    return 0;
}