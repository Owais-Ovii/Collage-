/*
To print :
                    **
                    ***
                    ****
*/
#include<stdio.h>

int main(){
    
int ui;
printf("Total no of lines:\t");
scanf("%d",&ui);

    for(int i =1;i<=ui;i++){
        
        for(int j=-1;j<i;j++){
            
            printf("*");
            
        }
        
    printf("\n");
    }
    
    return 0;
}