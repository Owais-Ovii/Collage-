
#include<stdio.h>

int main(){


char str[150];

printf("\nEnter any string / Word:\t");
//fgets(str,150,stdin);
scanf(" %s",str);


//length o str ke liyae
int i;
for(i=0;str[i]!='\0';i++){}

//printf("%d",i);

char isPalin='y';

//convert all letters to lower case
for(int j=0;j<i;j++){

if (str[j]<97)
{
    str[j]+=32;
}


}

for (int j = 0; j < ((int)i/2); j++)
{
if (str[j]!=str[i-j-1])
{
    isPalin='n';
}

}

if (isPalin=='y')
{
    printf("%s is a Palindrome",str);
}
else{printf("%s is not a Palindrome",str);}


    return 0;
}
