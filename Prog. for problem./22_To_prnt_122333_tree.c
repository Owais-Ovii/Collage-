#include <stdio.h>

int main() {

    int n,e,t;
    e=1;
    t=e;
    printf("\nTotal no of lines =  ");
    scanf("%d", &n);
    while (e<=n)
    {
        while (t<=e)
        {
           printf("%d",e);
            t++;
        }
        e++;
        t=1;
        printf("\n");
        
    }
    return 0;
}