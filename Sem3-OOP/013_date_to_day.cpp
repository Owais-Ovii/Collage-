#include<iostream>
int main()
{
	int dd,mm,yyyy,d,m,y;
	std::cout<<"ENTER THE DAY OF MONTH :-  ";
	std::cin>>dd;
	std::cout<<"\nENTER THE MONTH :-  ";
	std::cin>>mm;
	std::cout<<"\nENTER THE YEAR :- ";
	std::cin>>yyyy;
	std::cout<<"\nTHE DATE IS :- "<<dd<<"-"<<mm<<"-"<<yyyy<<std::endl;
	
	d= dd;
	 m=mm;
	 y=yyyy;
	if(m<3)
	{
		m=m+12;
		y=y-1;
	}
	int k=y%100;
	int j=y/100;
	int h = (d + 13*(m+1)/5 + k + k/4 + j/4 + 5*j) % 7;//h=0 means saturaday and so on. 
	// h = (h + 6) % 7;//so that sunday =0
	switch(h) 
	{
		
		case 0: std::cout<<"saturday"<<std::endl;break;
	
		case 1: std::cout<<"sunday"<<std::endl;break;
		case 2: std::cout<<"monday"<<std::endl;break;
		case 3: std::cout<<"tuesday"<<std::endl;break;
		case 4: std::cout<<"wednesday"<<std::endl;break;
		case 5: std::cout<<"thursday"<<std::endl;break;
		case 6: std::cout<<"friday"<<std::endl;break;
		
		
}

	
	
	
	
	
	
	
	
	
	
}