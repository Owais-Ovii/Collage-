/*to print
*
**
***
*/
#include<stdio.h>
int main (){

    int t; //user input
    scanf("%d", &t);
    int n=1;
    int w;

    while (n<=t)
    {
        while (w<n)
        {
        printf ("*");
        w++;
        }
        w=0;
        printf("\n");
        n++;
    }
    

    return 0;
}
