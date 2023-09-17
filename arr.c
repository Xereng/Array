#include<stdio.h>

int main()

{
	int size;
	printf("enter the size of the array:\n");
	
	scanf("%d",&size);
	
	int my[size];
	
	printf("enter %d elements:\n",size);
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&my[i]);
	}
	
	printf("Array:\n");
	
	for(int i=0;i<size;i++)
	{
		printf("%d",my[i]);
	}
	
	printf("\n");
	
	 
	
	return 0;
}