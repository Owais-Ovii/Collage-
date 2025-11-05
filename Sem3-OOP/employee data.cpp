#include<iostream>
struct employee
{
	int id;
	float rate;
	float hours;
	float pay;
	int salary;
};
int main()
{
	int salary;
	int a;
	std::cout<<"enter the number of employees :- "<<std::endl;
	std::cin>>a;
	struct employee e[a];
	std::cout<<"ENTER EMPLOYEE DATA :- "<<std::endl;
	for(int i=0;i<a;i++)
	{
		std::cout<<"enter the id of employee :- "<<std::endl;
		std::cin>>e[i].id;
		std::cout<<"enter the pay for the employee :- "<<std::endl;
		std::cin>>e[i].pay;
		std::cout<<"enter the hourly wage rate of employee :- "<<std::endl;
		std::cin>>e[i].rate;
		std::cout<<"enter the number of hours worked per week :- "<<std::endl;
		std::cin>>e[i].hours;
	}
	std::cout<<"EMPLOYEE DATA :- "<<std::endl;
	for(int i=0;i<a;i++)
	{
		std::cout<<"id :- "<<e[i].id<<std::endl;
		std::cout<<"hourly wage rate :- "<<e[i].rate<<std::endl;
		std::cout<<"hours worked :- "<<e[i].hours<<std::endl<<std::endl;
	}
	for(int i=0;i<a;i++)
	{
		if(e[i].hours>40)
		{
			e[i].salary=e[i].pay-(e[i].pay*3.625/100)+0.5*e[i].hours;
		}
		else
		{
			e[i].salary=e[i].pay-(e[i].pay*3.625/100);
		}
		std::cout<<"net pay for "<<e[i].id<<" is :- "<<e[i].salary<<std::endl;
	}
	float avg_1=0,avg;
	for(int i=0;i<a;i++)
	{
		avg_1=(avg+e[i].salary);
	}
	avg=avg_1/a;
	std::cout<<"AVERAGE SALARY :- "<<avg;
	
	
	
	
	
}