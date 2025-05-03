//To check divisibility of one number by the other+displays remainder
#include<stdio.h>
int main(){
    int n;
    printf("First number");
    scanf("%d",&n);
    int d;
    printf("Divisor");
    scanf("%d",&d);

    int q;
    q= n % d;

    if (q==0)
    {
        printf("%d is divisible by %d\n", n,d);
    }
    else 
    {printf("%d is not divisible by %d", n,d);}
    printf("\n%d is the reminder\n", q);
    
    return 0;
}
