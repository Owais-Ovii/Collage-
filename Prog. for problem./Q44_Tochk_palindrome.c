#include <stdio.h>

/*
Function that auto captalises all text in an array
*/

void autocap(char letters[]){
    
    //total elements of array
    int i =0;
    while (letters[i]!='\0')    {   i++;    }

    int j=0;
    while (i--)
    {
        if (letters[j]>=97&&letters[j]<=122)    {   letters[j]=letters[j]-32;}
        j++;
        
    }
    
}

/**/



int main(){

char a[1000];

printf("Input the value of: \n");
scanf("%s",a);

autocap(a);

//Length of array
char *ptr=a;
int length=0,cond,ispalin=1;
while (*ptr!='\0')
{

length++;ptr++;

}


if ((!length%2))
{
    cond=length/2;
}
else{
    cond=(length-1)/2;
}

for (int i = 0; i < cond; i++)//for even no of strings 4 or for 3
{
    if (a[i]!=a[length-i-1])
    {
        ispalin=0;
     break;
    }
    
}

if (ispalin)
{
        printf("This is A Palindrome");
}
else{
            printf("This is not A Palindrome");

}

    return 0;
}