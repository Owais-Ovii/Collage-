#include<stdio.h>

/*
Fn for length of a one D array
****************************** */
int strln(char array[]){
    int length=0;
    
    while(array[length]!='\0'){
        
        length ++;
        
    }
    
    return length;
}
/* ****************************** */

int main()
{

  char array[100];

printf("\nEnter any sentence: \n");
  fgets(array,sizeof(array),stdin);
  printf("\nThe size length of the string =\t%d",strln(array));

  return 0;
}