#include<stdio.h>
int main()
{
	int n;
	unsigned long long product=1;
	printf("enter a number :-- ");
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		product = product*i;
	}
	printf("\nfactorial of %d is :-- %d",n,product);
}