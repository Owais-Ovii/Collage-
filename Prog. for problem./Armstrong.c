#include<stdio.h>


int strln(char array[]){
    int length=0;
    
    while(array[length]!=0){
        
        length ++;
        
    }
    
    return length;
}

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
    
//Fn to convert any int array into an int    
int iarr_toint(int array[]){

//For length of string
    int length=0,number=0;
    while(array[length]!='\0'){
        
        length ++;
        
    }
    
    for (int i = 0 ;i<length;i++){
        
        number+=array[length-i-1]*(int)pwer(10,i);
        
    }
    return number;
}


int main(){
    
    char arr[100];
    int a;
    printf("Enter any integer: ");
    scanf("%s",arr);
    
    a=strln(arr);
    
    int ar[a];
    
    for(int i =0;i<a;i++){
        
        if(arr[i]>=48&&arr[i]<=57){
            
            ar[i]=(int)arr[i]-48;
            
        }
        
    }
    
    
    int sum=0,org=0;
    for(int i =0;i<a;i++){
        
        printf("%d",ar[i]);
        
        sum+=pwer(ar[i],a);
        
        org+=ar[a-i-1]*pwer(10,i);//this 
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