#include<iostream>

int main()
{
	double a1,b1,a2,b2;
	std::cout<<"enter the real and imaginary part for 1st number :-- "<<std::endl;
	std::cin>>a1>>b1;
	std::cout<<"enter the real and imaginary part for 2nd number :-- "<<std::endl;
	std::cin>>a2>>b2;
	
	double mag_1= (a1*a1)+(b1*b1);
	double mag_2= (a2*a2)+(b2*b2);
	
	if(mag_1>mag_2)
	{
		std::cout<<"first one has higher magnitude "<<std::endl;
	}
	else if(mag_1<mag_2)
	{
		std::cout<<"second one has higher magnitude "<<std::endl;
	}
	else
	{
		std::cout<<"both are equal";
	}
}