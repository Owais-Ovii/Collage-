//Function for arithmetic progression
#include<stdio.h>
double aprogression(double a,double d, int S_of_howmany_terms,double arrayto_str_ap[S_of_howmany_terms]){//a = first term of ap, d= common difference, Sn= sum of first n terms
    double Sn=0;
    for(int i =0; i<S_of_howmany_terms;i++){
        
        arrayto_str_ap[i]= a+(i*d);// Tnth= a+(n-1)d, here n-1 = i
        
        Sn+=arrayto_str_ap[i];//for sum of first n terms of ap
    }
    
    return Sn;
}

int main(){
    
    double a=0,d=0;
    int n=0;
    printf("\nFor Arithmetic progression defined such that nth Term = a+(n-1)d, Enter value of a\t:\t");
    scanf("%lf",&a);
    
    printf("\nEnter value of d:\t");
    scanf("%lf",&d);
    
    printf("\nTotal terms in progression n:\t");
    scanf("%d",&n);
    double array[n];
    printf("Sum of n terms of Ap= %lf\n",aprogression(a,d,n,array));
    
    for(int i =0;i<n;i++){
        
        printf("%lf  ",array[i]);
        
    }
    return 0;
}