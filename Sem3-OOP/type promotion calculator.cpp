#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double a, b, c;    // use double to store all operands (manual promotion)
    char d, e;         // operators
    string fl; 
	int choice; 
	do{       // desired result type (string, not char)

    cout << "Enter the 3 operands: ";
    cin >> a >> b >> c;

    cout << "Enter the operations (between 1st & 2nd, and 2nd & 3rd): ";
    cin >> d >> e;

    cout << "Enter the desired result type (int or float): ";
    cin >> fl;

    double result = 0.0;

    // First apply operation between a and b
    double temp;
    if( d== '+')
    {
    	temp=a+b;
	}
	else if ( d=='-')
	{
		temp=a-b;
	}
		else if ( d=='*')
	{
		temp=a*b;
	}
	
	else if (d== '/')
	{
		temp = a/b;
	}
	else
	{
		std::cout<<"\ninvalid input\n";
	}
	if(e=='+')
	{
		result=temp+c;
	}
	else if (e=='-')
	{
		result=temp-c;
	}
		else if (e=='*')
	{
		result=temp*c;
	}
	
		else if (e=='/')
	{
		result=temp/c;
	}
	else
	{
		std::cout<<"\ninavlid\n";
	}
	if(fl=="int")
	{
		std::cout<<"result :- "<<(int)result;
	}
	else if(fl=="float")
	{
		std::cout<<"result :- "<<(float)result;
	}
	else
	{
		std::cout<<"invalid input";
	}
	std::cout<<"\ndo you want to continue. if yes enter '1' else enter '0' :--";
	cin>>choice;
}while(choice==1);

















































































































}