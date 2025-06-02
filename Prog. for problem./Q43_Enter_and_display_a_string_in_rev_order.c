#include <stdio.h> 
#include <string.h>

int main() { 

char str[100]; 
int length = 0;

printf("Enter a string: "); 
fgets(str, sizeof(str), stdin);
// Remove newline character if present 

str[strcspn(str, "\n")] = '\0';
// Calculate length manually 

while (str[length] != '\0') 
{ 
length++;
}

printf("Reversed string: ");

for (int i = length - 1; i >= 0; i--) 
{ 
printf("%c", str[i]);

} 
printf("\n"); 

return 0;
 }