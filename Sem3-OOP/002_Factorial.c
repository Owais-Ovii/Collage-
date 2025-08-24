#include<stdio.h>

int main(){


int num;
printf("Factorial of:  \n");
scanf("%d",&num);

int prd=1;
printf("\nFor operation: ");
for(int i=1;i<=num;i++){

printf("%d",i);

if(i<num){printf(" * ");}

prd*=i;

}

printf("\n%d! : %d",num,prd);

    return 0;
}
