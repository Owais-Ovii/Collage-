#include <stdio.h> 

#include <string.h>

int main() 
{ 

char str1[100] = "Hello"; 

char str2[100] = "World"; 

char str3[100];

// strlen(): Length of string 
printf("Length of '%s' is %lu\n", str1, strlen(str1));

// strcpy(): Copy 
stringstrcpy(str3, str1); 
printf("After strcpy, str3 = %s\n", str3);

// strcat(): Concatenate strings 
strcat(str3, str2); 
printf("After strcat, str3 = %s\n", str3);

// strcmp(): Compare strings 
int cmp = strcmp(str1, str2); 
if (cmp == 0) 
{ 
printf("'%s' and '%s' are equal.\n", str1, str2);
} 
else if (cmp < 0) 
{ 
printf("'%s' is less than '%s'.\n", str1, str2);
} 
else 
{ printf("'%s' is greater than '%s'.\n", str1, str2); } 
return 0;
}