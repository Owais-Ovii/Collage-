//to calculate factorial using for loop
#include <stdio.h>
int main (){

    int n,p,i,t=1;//user input
    scanf("%d",&n);
    p=n;
    for (i = n-1; i>0; i--)
    {
      p=p*i;
      
    }
    printf("%d", p);
    return 0;
}
