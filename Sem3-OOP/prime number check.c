#include<stdio.h>
int main()
{
	int n;
	printf("enter the number which you want to check for prime :- ");
	scanf("%d",&n);
	if(n==1 || n==0)
	{
		printf("not a prime number \n");
	}
	for(int i=2;i<n;i++)
	{
		if(n%i!=0)
		{
			printf("\nnumber is  prime!");
			break;
		}
		else
		{
			printf("\nnumber is not prime ");
			break;
		}
	}
}