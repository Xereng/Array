#include<stdio.h>

int main(){
	
	int myArray[]={1,2,3,4,5};
	int size=sizeof(myArray)/sizeof(myArray[0]);
	int elementToRemove= 2;
	
	int found=0;
	
	int i;
	for(i=0;i<size;i++){
		
		if(myArray[i]==elementToRemove)
		{
			found=1;
			break;
		}
	}
	
	if(found){
		
		for(int j=i;j<size-1;j++)
		{
			myArray[j]=myArray[j+1];
		}
		size--;
		
		for(int j=0;j<size;j++){
			printf("%d",myArray[j]);
		}
	}else{
		printf("Element not found.\n");
	}
	return 0;
}