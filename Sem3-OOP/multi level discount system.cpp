#include<iostream>

int main()
{
	int amnt,total,discount;
	char choice='y';
	for(;choice == 'y' || choice =='Y';)
	{
	
	std::cout<<"enter the amount :- ";
	std::cin>>amnt;
	if(amnt<100)
	{
		std::cout<<"Total = "<<amnt;
	}
	else if(amnt>=100 && amnt<500)
	{
		discount=amnt*0.1;
		total=amnt-discount;
		std::cout<<"Total = "<<total;
	}
	else if(amnt>=500 && amnt<1000)
	{
		discount=amnt*0.15;
		total=amnt-discount;
		std::cout<<"Total = "<<total;
	}
	else{
		discount=amnt*0.2;
		total=amnt-discount;
		std::cout<<"Total = "<<total;
	}
	std::cout<<"\nDO YOU WANT TO CONTINUE?";
	std::cin>>choice;
}
}