/*
To print :
                      *
                     **
                    ***
*/
#include<stdio.h>

int main(){
    
int tlines=0;
printf("Total no of lines:\t");
scanf("%d",&tlines);

    for(int lno =1;lno<=tlines;lno++){
        
        for (int spaces=1;spaces<=tlines-lno;spaces++){
            
            printf(" ");
            
        }
        
        for(int stars=1;stars<=lno;stars++){
            
            printf("*");
            
        }
        
    printf("\n");
    }
    
    return 0;
}