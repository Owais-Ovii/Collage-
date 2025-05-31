#include<stdio.h>
//power function reqd for gp
    double pwer(double a, int n){
        int j=1;
        double p=a;
        if(n>0){
        while (j<n)
        {
            p*=a;
            j++;
        }
            
        }
        else if (n==0){p=1.0;}
        return p;
    }
    
//Function for geometric progression
double gprogression(double a,double r, int S_of_howmany_terms,double arrayto_str_ap[S_of_howmany_terms]){//a = first term of ap, d= common difference, Sn= sum of first n terms
    double Sn=0;
    for(int i =0; i<S_of_howmany_terms;i++){
        
        arrayto_str_ap[i]= a*pwer(r,i);// Tnth= a+(n-1)d, here n-1 = i
        
        Sn+=arrayto_str_ap[i];//for sum of first n terms of ap
    }
    
    return Sn;
}

int main(){
    
    double a=0,r=0;
    int n=0;
    printf("\nFor Geometric progression defined such that nth Term = a* r^(n-1), Enter value of a\t:\t");
    scanf("%lf",&a);
    
    printf("\nEnter value of r:\t");
    scanf(" %lf",&r);
    
    printf("\nTotal terms in progression n:\t");
    scanf("%d",&n);
    double array[n];
    printf("Sum of n terms of GP= %lf\n",gprogression(a,r,n,array));
    
    for(int i =0;i<n;i++){
        
        printf("%lf  ",array[i]);
        
    }
    return 0;
}