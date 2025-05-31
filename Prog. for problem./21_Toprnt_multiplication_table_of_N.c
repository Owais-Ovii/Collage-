//to print table of n upto 10+do the sum of answers
#include<stdio.h>
int main(){
    int n,i=1,p=n,s=0,o,maxmultiplier;//n= user input,i= multiplier, p=product, s= sums
    printf("\nEnter the multiplicand: ");
    scanf("%d",&n);

printf("\nEnter the Max value of multiplier: ");
    scanf("%d",&maxmultiplier);

    for (i = 1; i <=maxmultiplier; i++)
    {  
        p=n*i;
        o=(i*p)+p;
        s=s+p;
        printf("%d  *   %d  =   %d\n",n,i,p);//e.g. 4*3=12
       
    }
    printf("The sum of the products is: %d",s);
    return 0;

}
