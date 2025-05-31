#include<stdio.h>

/*
Function to sort any int array
*/

void sort1diarray(int array[]){
    
    int temporary=0,i;
    
//total elements of array
    int telem =0;
    while (array[telem]!='\0')    {   telem++;    }

//sorting 
    for(i=0;i<telem;i++){
        
        for(int j =i;j<telem;j++){
            
            if(array[j]>array[i]){
                
                temporary=array[i];
                array[i]=array[j];
                array[j]=temporary;
                
                
            }
        }
        

    }
//
}
/**/


/* 
Function to display a 1d int array
*/
void dis1diarr(int matrix[])
{
printf("\nA:\n");

int telem =0;
while (matrix[telem]!='\0')    {   telem++;    }
    
for(int l =0 ; matrix[l]!='\0';l++){

printf("%d ",matrix[l]);
   
}}
/**/

int main(){
    
    int array[5]={1,2,3,4,9};
    dis1diarr(array);
    
    sort1diarray(array);
    
    dis1diarr(array);
    
    
    
    return 0;
}