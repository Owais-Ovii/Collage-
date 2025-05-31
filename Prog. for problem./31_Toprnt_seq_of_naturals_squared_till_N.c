//print squares of first n natural numbers
//for (t = 1; t <=n; t=t+2) can be done
//what does t=t++ signify? Not t=t=t+1
#include <stdio.h>
int pw(int a, int n){
    int j=1;
    int p=a;
    while (j<n)
    {
        p=p*a;
        j++;
    }
    return p;
}
int main() {

    int t,n;
    printf("For Sequence of naturals squared till N (N^2), Enter value of N: ");
    scanf("%d",&n);
    for (t = 1; t <=n; t++)
    {
       printf("%d ",pw(t,2));
    }
    return 0;
}