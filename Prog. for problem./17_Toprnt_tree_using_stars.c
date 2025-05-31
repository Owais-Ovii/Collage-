/*
   *
  ***
 *****
*******
n(Total number of lines n)
ln (line number_ Co Rel to no of spaces in a manner  T n of sp.= n-ln)
no of times star has to be printed rel= 2n-1
*/


#include <stdio.h>

int main() {

int tlines,ln,no_o_spc,nos;
//tlines = total no of lines, ln = line no console would be on, no_o_spc = no of spaces, nos = no of stars

printf("How many lines of stars to print: \n");
scanf("%d",&tlines);
printf("\n");

    for (int ln=0;ln<=tlines;ln++){

        for ( no_o_spc = 0; no_o_spc <= tlines-ln; no_o_spc++)
        {
           printf(" ");
        }
        

        for ( nos = 1; nos <= (2*ln)-1; nos++)
        {
            printf("*");
        }
        
        
        printf("\n");
        
        }
        

    return 0;
}