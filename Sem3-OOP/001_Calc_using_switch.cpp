#include<stdio.h>
#include<iostream>

using namespace std;

float sum(float a, float b){

return a+b;

}

float diff(float a, float b){

return a-b;

}

float mul(float a, float b){

return a*b;

}

float div(float a, float b){

return a/b;

}


int main(){

    cout<<"\nEnter the first Operand:\t";
    float f1,f2;
    cin>>f1;

    cout<<"\nEnter the first Operator: +, -, /, *\t";
    char op;
    cin>>op;


while(op != '='){

    cout<<"\n"<<f1<<" "<<op<<" ";


    cin>>f2;

    switch(op){

        case '+':

        f1=sum(f1,f2);
        break;

        case '-':

        f1=diff(f1,f2);
        break;

        case '*':

        f1=mul(f1,f2);
        break;

        case '/':

        f1=div(f1,f2);
        break;



    }     
    
cout<<f1;

    cout<<"\nEnter the Next Operator: +, -, /, *\t";

    cin>>op;



}

    return 0;
}
