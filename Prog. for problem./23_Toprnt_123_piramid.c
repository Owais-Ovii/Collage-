/*To print half tree 
1
12
123
1234
12345
Infinite loop*/

#include <stdio.h>
int main (){
    int n=1;//which line we are on
    int t; //user input
    int a=1;
    
    printf("\nTotal number of rows    =   ");   
    scanf("%d", &t);
   
    while (n<=t)
    {
        while (a<=n)
        {
            printf("%d ",a);
            a++;
        }
        a=1;     
        n++;
        printf("\n");
        
    
    }
    
    return 0;
}