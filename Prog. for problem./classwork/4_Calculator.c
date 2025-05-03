/*Calculator with +,-,*,/
Steps
take multiple user inputs
define operator between each input
print result between every next step
*/

#include <stdio.h>
int main(){
    float input1;
    float input2;
    char operator='x';
    float output;
    int n=0;//To count the number of operations and to change the initial print statement
    printf("Input the first number\n");
    scanf("%f",&input1);
    output =input1;
    
     while (operator!='s')
     { 
      if (n==0)
      {
     printf("\nInput initial operator +,*,- or / \n");
     scanf(" %c",&operator);//we needed a space between " and % otherwise scanf didnt work as intended 
      }
      else{
        printf("\n\nInput next operator +,*,- or / and  s for termination \n");
        scanf(" %c",&operator);//we needed a space between " and % otherwise scanf didnt work as intended 
      }
      
    
      if (operator=='+') //== were required to make it a  comparison
     {
        n=n+1;
        printf("\ninput the next number\n");
        scanf("%f",&input2);
        output=output+input2;
        printf("%f\n", output);

     }
     else if (operator=='*') //DONT use semicolon
     {
      n=n+1;
      printf("Input the next number\n");
      scanf("%f", &input2);
      output= output*input2;
      printf("%f\n", output);
     }

     else if (operator=='-') 
     {               
         n=n+1;
         printf("Input the next number\n");
         scanf("%f", &input2);
         output=output-input2;
         printf("%f", output);
     }
     else if (operator=='/')//for division
     {
         n=n+1;
         printf("Input the next number\n");
         scanf("%f", &input2);
         output=output/input2;
         printf("\n%f",output);

     }     
         }
     
      printf("\nThe final output of the numbers is %f \n", output);
      printf("The total number of operations is %d", n);

    return 0;
}
