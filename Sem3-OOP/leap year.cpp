#include<iostream>
int main()
{
	int y;
std::cout<<"enter a year :- "<<std::endl;
std::cin>>y;
if((y%4==0 && y%100!=0) || (y%400==0))
{
	std::cout<<"\nit is a leap year";
}
else
{
	std::cout<<"\nit is not a leap year";
}
std::cout<<"\nnext 5 leap years :-"<<std::endl;

for(int i=y;i<y+25;i++)
{
	if((i%4==0 && i%100!=0) || (i%400==0))
	{
		std::cout<<i<<std::endl ;
	}

}
}