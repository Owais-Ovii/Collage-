// To check the number of divisors for a given number and determine whether it is prime or not
#include <stdio.h>

int main() {

int n,i,j=0,m=0;

printf("\nFor facotrs of N, Enter the value of N:   ");
scanf("%d",&n);

printf("Following are the factors of %d: 1,  ",n);


for(i=2;n>i;i++){
    
    switch(n%i){
        
        case 0:
        if (!(i-2))
        {
            m=1;
        }
        
        j++;
        printf("%d",i);
        if(i<n-1){printf(",  ");}
    }
    
}

switch(j){
    case 0: 
    printf("%d.\nTotal divisors are %d\nInput is Prime",n,j+2);
    break;
    
    default:
    printf("%d.\nTotal divisors are %d \nInput isnt Prime",n,j+2);

}
    if (m)
    {
        printf("\nInput is even");
    }
    else{
        printf("\nInput is odd");
    } 
    printf("");

    return 0;
}
