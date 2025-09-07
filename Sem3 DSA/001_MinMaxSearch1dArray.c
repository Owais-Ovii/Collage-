#include<stdio.h>

int min_1dintarr(int array[],int size_of_arr){

int min = array[0], max = array[0];

for (int i =0;i<size_of_arr;i++){

if (min>array[i])
{
    min=array[i];
}

}

return min;

}

int max_1dintarr(int array[],int size_of_arr){

int min = array[0], max = array[0];

for (int i =0;i<size_of_arr;i++){

if (max<array[i])
{
    max=array[i];
}

}

return max;

}

int linearsearch(int array[],int size, int target, int targetat[size]){

    int k=0;
for (int i =0; i<size;i++){

if (array[i]==target)
{
    targetat[k]=i;
    k++;
}


}
targetat[k]= (1<<31);


}

int main(){


    printf("\nEnter the max size of the array: ");
    int size;
    scanf("%d", &size);


    int array[size];

    for(int i=0; i<size; i++){

        printf("Enter elem. no. %d :",i);
        scanf("%d", &array[i]);

    }

    printf("\nMax: %d",max_1dintarr(array,size));
    printf("\nMin: %d",min_1dintarr(array,size));

    int targetat[size],target;
    printf("\nEnter what number to find:");
    scanf(" %d",&target);
    linearsearch(array, size,target, targetat);


            if (targetat[0]==-2147483648)
        {
            printf("\nTarget not found!");
        }
        else
        {
            printf("\nTarget found at Position:");
        }
        
    for (int i = 0; targetat[i]!=-2147483648  ; i++)
    {

        printf(" %d, ",targetat[i]+1);
        
    }
    


    return 0;
}