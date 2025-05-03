#include <stdio.h>

int main() {

    int var1=9990,o;

    char char1='A',char2,char3;

    o=var1+char1;//Implicit conversion : condition chota wala convert into bada vala
  
    float var3=var1+1.0;


    printf("The implicit additon of %c + %d is %d\n",char1,var1,o);
    printf("The implicit additon of %d + 1.0 is %f\n",var1,var3);
   
char2=char1+var1;
 printf("The implicit additon of %c + %d is %c\n",char1,var1,char2);

 char3=(char)var1+char1;
 printf("The explicit additon of %c + char(%d) is %c\n",char1,var1,char3);

 


 
    return 0;
}
