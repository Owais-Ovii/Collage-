#include<stdio.h>
int main()
{
	int arr[10],d,a;
	printf("enter the no of digits in you number:-  ");
	scanf("%d",&d);
	printf("\nenter the digits of your number :--  ");
	for(int i=0;i<d;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nthe entered number is :-- ");
	for(int i=0;i<d;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\nthe number in reverse order :--  ");
	for(int i=d-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}