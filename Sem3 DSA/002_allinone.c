#include<stdio.h>
int arr[30],i,size,ele,e,p,a,b,c,d,posn,z,j,r;


int del_5th()
{
		 printf("enter the elements of the array :- ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the array elements are :- ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("enter the element which you want to remove: ");
    scanf("%d", &r);

    printf("element is found at index :- ");
    int found = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == r)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found)
    {
        printf("\nElement not found!\n");
        return 0;
    }

    printf("\nenter the index for the element which you want to remove :- ");
    scanf("%d", &j);
    if(j < 0 || j >= size || arr[j] != r)
    {
        printf("Invalid index!\n");
        return 0;
    }

    for(i = j; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Updated array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


int del_4th()
{
		printf("DELETION WHEN ELEMENT IS GIVEN\n");
	printf("enter the elements of the array :- ");
for( i =0; i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("the array elements are :- ");
for( i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
printf("enter the element you want to remove :- ");
scanf("%d",&d);
for(i=0;i<size;i++)
{
	if(arr[i]==d)
	{
		 posn=i;
		break;
	}
}

for(i=posn;i<size-1;i++)
{
arr[i]=arr[i+1];
}
size--;
printf("UPDATED ARRAY =  ");
for(i=0;i<size;i++)
{
	printf("%d",arr[i]);
}
printf("\n\n");
	
}

int del_3rd()
{
		printf("DELETION AT THE BEGINNING\n");
	printf("enter the elements of the array :- ");
for( i =0; i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("the array elements are :- ");
for( i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
printf("updated array after deletion :-- ");
for(i=1;i<size;i++)
{
	printf("%d",arr[i]);
}
printf("\n\n");
	
}


int del_2nd()
{
	printf("DELETION AT THE END\n");
	printf("enter the elements of the array :- ");
for( i =0; i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("the array elements are :- ");
for( i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
printf("updated array = ");
for(i=0;i<size-1;i++)
{
	printf("%d",arr[i]);
}
printf("\n");
}
	



int del_1st()
{
	printf("\n");
	printf("DELETION AT ANY POSITION :- \n");
	
	printf("enter the elements of the array :- ");
for( i =0; i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("\n");
printf("the array elements are :- ");
for( i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");

	printf("enter the position from whereyou want to delete the element :-");
	scanf("%d",&c);
	int temp = arr[c-1];
	for(i=c-1;i<size-1;i++)
	{
	arr[i]=arr[i+1];
    }
    size--;

    printf("updated array after deletion = ");
    for(i=0;i<size;i++)
    {
    	printf("%d ",arr[i]);
	}
	printf("\n");
}


int ins_3rd()
{
	printf("\n");
	printf("INSERTION AT THE END :- \n\n");
	
	printf("enter the elements of the array :- ");
for( i =0; i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("the array elements are :- ");
for( i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");

printf("enter the element which you want to add");
scanf("%d",&b);
printf("\n");
arr[size]=b;
for(i=0;i<=size;i++)
{
	printf("%d",arr[i]);
}
printf("\n\n");
}


int ins_2nd()
{
	printf("INSERTION AT BEGINNING :- \n\n");
	printf("enter the elements of the array :- ");
for( i =0; i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("the array elements are :- ");
for( i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");

	printf("enter the elment you want to insert :- ");
	scanf("%d",&a);
	printf("\n");
	for(i=size-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=a;
	printf("updated array :-- ");
	for(i=0;i<=size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n\n");
}



int ins_1st(int e, int p)
{
	printf("INSERTION AT ANY POSITION :-- \n");
	printf("enter the element which you want to add :- ");
	scanf("%d",&e); 
	printf("enter the position where you want to add the element :- ");
	scanf("%d",&p);
	if(p>size)
	{
	printf("overflow\n\n");
    }
else 
    {
	for(i=size-1;i>=p-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[p-1]=e;
	for( i=0;i<=size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
    }
}



int arr_disp()
{
	printf("TRAVERSAL:-  \n");
printf("enter the elements of the array :- ");
for( i =0; i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("the array elements are :- ");
for( i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
printf("\n\n");
}


int main()
{
	printf("enter the size of the array :- ");
    scanf("%d",&size);
	arr_disp();//traversal
	ins_1st( e,p);//insertion at any position 
	ins_2nd();//insertion at the beginning
	ins_3rd();//insertion at the ending
	del_1st();//deletion at any posn
	del_2nd();//deletion at end
	del_3rd();//deletion at the beginning
	del_4th();//when element is given instead of index
	del_5th();// deletn of redundant element in array
	
	
}
