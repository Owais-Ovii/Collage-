/*
To print :
Total number of lines   =   6
6 5 4 3 2 1 
6 5 4 3 2 
6 5 4 3 
6 5 4 
6 5 
6
*/
#include <stdio.h>
int main(){

    int n=1;
    int e=1;
    int t;
    
    printf("\nTotal number of lines   =   ");
    scanf("%d", &t);
    int q=t;
    while (e<=t-n+1)
    {
       while (e<=t-n+1)
        {
           printf("%d ", q);
           q--;
           e++;
        }
        e=1;
        q=t;
        printf("\n");
        n++;
    }
   
    


    return 0;
}