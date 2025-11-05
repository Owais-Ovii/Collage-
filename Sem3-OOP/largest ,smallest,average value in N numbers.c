#include <stdio.h>

int display(int arr[])
{
    int N;
    printf("Enter the quantity of numbers: ");
    scanf("%d", &N);

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe numbers are: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return N; 
}

int largest_value(int arr[], int N)
{
    int max = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("\nLargest value = %d\n", max);
    return max;
}

int smallest_value(int arr[], int N)
{
	int min = arr[0];
	for(int i=0;i<N;i++)
	{
	if(arr[i]<min)
	{
		min=arr[i];
	}
}
printf("\nsmallest value = %d",min);
return min;
}

float average(int arr[],int N)
{
	int  sum=0;
	float avg;
	for(int i=0;i<N;i++)
	{
		 sum=sum+arr[i];
	}
		avg=sum/N;
	
	printf("\naverage =  %.1f",avg);
	return avg;
}


float stnd_dev(int arr[],int N, float avg)
{
int 	sum_squares=0;
	for(int i=0;i<N;i++)
	{
		sum_squares=sum_squares+arr[i]*arr[i];
	}
	float dev=sqrt((sum_squares/N)-avg*avg);
	printf("\n standard deviation = %.1f",dev);
	return dev;
	
}


int main()
{
//	int sum_squares=0;
//	int sum=0;
    int arr[100];
    int N = display(arr);          
    int max = largest_value(arr, N); 
    int min= smallest_value(arr,N);
    float avg= average(arr,N);
    float dev= stnd_dev(arr,N,avg);
   
    return 0;
}
