#include<stdio.h>
#include<string.h>
double pwer(double a, int n){
        int j=1;
        double p=a;
        if(n>0){
        while (j<n)
        {
            p*=a;
            j++;
        }}
        else if (n==0){p=1.0;}
        return p;
    }
int main(){
    
    char arr[100];
    int a;
    printf("Enter any integer: ");
    scanf("%s",arr);
    
    a=strlen(arr);
    
    int ar[a];
    
    for(int i =0;i<a;i++){
        
        if(arr[i]>=48&&arr[i]<=57){
            
            ar[i]=(int)arr[i]-48;
            
        }
        
    }
    
    
    int sum=0,org=0;
    for(int i =0;i<a;i++){
        
        printf("%d",ar[i]);
        
        sum+=pwer(ar[i],a);//sum of digit raised to total no of digits
        
        org+=ar[a-i-1]*pwer(10,i);//this converts the integer array to a single int via 123= 3*10^0+2*10^1...
    }
    
printf("\nAs sum of digit raised to total no of digits = %d and org number = %d",sum,org);

if(sum==org){
    
    printf("\nThis is an Armstrong number");
    
}
else{
    
    printf("\nThis aint one");
    
}
    
    return 0;
    
}