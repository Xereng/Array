#include<stdio.h>

int main(){
	
	int myArray[]={1,2,3,4,5};
	
	int size=sizeof(myArray)/sizeof(myArray[0]);
	
	int elementToReplace=3;
	
	int newValue=42;
	
	int found=0;
	
	  for(int i=0;i<size;i++){
	  	
	  	if(myArray[i]==elementToReplace)
	  	{
	  		found=1;
	  		myArray[i]=newValue;
	  		break;
	  		
		  }
	  }
	  
	  if(found){
	  	
	  	for(int i=0;i<size;i++){
	  		
	  		printf("%d",myArray[i]);
		  }
	  }else{
	  	
	  	printf("Element not found .\n");
	  }
	  
	  return 0;
}