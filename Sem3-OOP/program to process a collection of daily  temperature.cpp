#include<iostream>
int main()
{
	std::cout<<"TEMPERATURE CATEGORIES :-  \n";
	std::cout<<"HOT DAYS :- TEMP>85 DEGREES"<<std::endl;
	std::cout<<"PLEASANT DAYS :- TEMP >=64 AND <=84 DEGREES"<<std::endl;
	std::cout<<"COLD DAYS :- TEMP<64 DEGREES"<<std::endl;
	int d,temp[100],cold=0,hot=0,pleasant=0;
	std::cout<<"Enter the no. of days for which you want to enter the temperature :- ";
	std::cin>>d;
	std::cout<<"Enter the temperatures :- \n";
	for(int i=0;i<d;i++)
	{
	std::cin>>temp[i];
	}
	std::cout<<"\nThe tempertures for "<<d<<"days are :-  ";
	for(int i=0;i<d;i++)
	{
		std::cout<<temp[i]<<" ";
	}
	for(int i=0;i<d;i++)
	{
		if(temp[i]>=85)
		{
			hot++;
		
		}

		else if(temp[i]>=64 && temp[i]<=84)
		{
			pleasant++;
		
		
		 } 
		 
	
	else
	{
		cold++;
	}

}
std::cout<<"\nnumber of hot days :- "<<hot<<std::endl;
std::cout<<"number of pleasant days :- "<<pleasant<<std::endl;
std::cout<<"number of cold days :- "<<cold<<std::endl;

float avg;
int sum=0;
for(int i=0;i<d;i++)
{
	 sum=sum+temp[i];
}
avg=sum/d;
std::cout<<"AVERAGE TEMPERATURE FOR "<<d<<" DAYS :-- "<<avg;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}