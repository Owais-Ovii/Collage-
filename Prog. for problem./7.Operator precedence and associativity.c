#include <stdio.h>

int main() {

    int i=8,j=5,l;
    float x=0.005, y=-0.01,k;
    char C='e',D='f';
    
k=(3*i-2*j)%(2*D-C);
printf("\nFor k=(3*i-2*j)%%(2*D-C); K= %f\n",k);

k=-(i+j);
printf("\nFor k=-(i+j), k=%f\n",k);

k=C>D;
printf("\nFor k=C>D, k=%f\n",k);

k=5*(x+y)>'C';
printf("\nFor k=5*(x+y)>'C', k=%f\n",k);

k=2*x+y==0;
printf("\nFor k=2*x+y==0, k=%f\n",k);

k=2*x+(y==0);
printf("\nFor k=2*x+(y==0), k=%f\n",k);

k=(2*x+y)==0;
printf("\nFor k=(2*x+y)==0, k=%f\n",k);

k=x>y&&i>0||j<10;
printf("\nFor k=x>y&&i>0||j<10, k=%f\n",k);

k=x>y&&i>0||j<0;
printf("\nFor k=x>y&&i>0||j<0, k=%f\n",k);

k=x>y&&i>0&&j<5;
printf("\nFor k=x>y&&i>0&&j<5, k=%f\n",k);


    return 0;
}
