#include<stdio.h>

int main(){


int num;
printf("\nFor the sequence of N even naturals, Enter the value of N :  \n");
scanf("%d",&num);



for(int i=1;i<=num;i++){

    if (!(i%2))
    {
printf("%d ",i);
    }
    

}

    return 0;
}