//To calculate factorial of a given number
#include<stdio.h>
int main(){
    int n,p,s,e;
    p=1;
    scanf("%d",&n);
    e=n;
s=1;
    while(p<=n-1){
  
    s=s*e;
    e--;
    p++;


    }
    printf("%d",s);

    return 0;
}
