#include<stdio.h>

int main(){


int num;
printf("Input the value of:  \n");
scanf("%d",&num);

int prd=1;
printf("\nFor operation: ");
for(int i=1;i<=num;i++){

printf("%d",i);

if(i<num){printf(" * ");}

prd*=i;

}

printf("\nProduct :%d",prd);

    return 0;
}