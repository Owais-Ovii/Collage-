#include <stdio.h>

int main() {

    int n,e,t;
    e=1;
    t=e;
    printf("\nN =  ");
    scanf("%d", &n);
    while (e<=n)
    {
        while (t<=e)
        {
           printf("%d",e);
            t++;
        }
        printf(" ");
        e++;
        t=1;
  
        
    }
    return 0;
}