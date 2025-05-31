#include<stdio.h>

int main(){


int num;
printf("\nFor the factors of N, Enter the value of N: \n");
scanf("%d",&num);

printf("\nFactors of %d = ",num);
for(int i=1;i<=num;i++){

if(!(num%i)){

printf("%d ",i);

}
}
    return 0;
}