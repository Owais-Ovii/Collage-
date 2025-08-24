//Display user defined array 
//Linear search through the arry 
//man min all via functions

#include<stdio.h>

void dis1dintarr(int size, int arr[]){
	
	printf("The stored array is:");
	
		for(int i=0;i<size;i++){
		
		printf("%d, ",arr[i]);
		

		
	}
	return ;
	
}

int minmax(int arr[],int size,int* min,int* max,int targetslot){
	
	*min=arr[0];
	*max=arr[0];
	int tarat=-1,i;
	for(i=0; i<size;i++){
		
		if (*min>arr[i]){
			*min=arr[i];
			
		}
		
		if(*max<arr[i]){
			
			*max=arr[i];
			
		}
		if(arr[i]==targetslot){
			
			tarat=i;
			
		}
		
	}
	
	return tarat;
}


int main(){
	
	int size;

printf("\nEnter size of arr :");	
scanf(" %d",&size);
	
	
	int arr[size];
	
	
	
	for(int i=0;i<size;i++){
		
		
		
		printf("\nEnter element no. %d:",i);
		
		scanf(" %d",&arr[i]);
		
	}
	
	dis1dintarr(size,arr);
	
	int min,max;
	int target;
	
printf("\nEnter num to find: ");
scanf(" %d",&target);
int p;
	
	p=minmax(arr,size,&min,&max,target);
	
	printf("\nMin: %d, Max: %d, IndexOTarget: %d",min,max,p);
	printf("\nIf Index = -1 then elem not f0und");
	
	return 0;
	
}





