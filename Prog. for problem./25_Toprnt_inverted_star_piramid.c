/*
To print an inverted half pyramid of stars based on user input
**** q=t 1st line
*** q=t=1 2nd line
** q=t-2 3rd line
* q=t-3 4th line
n will denote line number and its initial value will be t(user input)
q: How many times the inner loop should run
Variability: In line number denoted by n and in the number of stars in each loop i.e the number of times the inner loop should run
1st loop: To print ****
    while q<=t-n+1, print *
    q--

*/
#include <stdio.h>
int main(){
    int n=1;
    
    int t;
    printf("How many lines should the output have:  ");
    scanf("%d", &t);
    int e=1;
    while (n<=t)
    {
        while (e<=t-n+1)
        {
           printf("* ");
           e++;
    }
    printf("\n");
    e=1;
    n++;
    

    }
    

    return 0;
}