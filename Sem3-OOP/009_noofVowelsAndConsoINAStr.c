/* Prog to Input a string and count the number of vowels and consonants. */
#include<stdio.h>


/*
Function that auto captalises all text in an array
************************************************** */

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

printf("Enter a string:");
char array[100];
fgets(array, 100, stdin);

int no_o_vowels = 0 ,no_o_consonants =0 ;

autocap(array);

for (int i = 0; array[i] != '\n'; i++)
{
    if(array[i]=='A'||array[i]=='E'||array[i]=='I'||array[i]=='O'||array[i]=='U'){

        no_o_vowels ++;

    }
    else{no_o_consonants ++;}
}

printf("Within the string \" %s \": \nTotal number of consonants = %d.\nTotal number of vowels = %d\n",array, no_o_consonants,no_o_vowels);



    return 0;
}
