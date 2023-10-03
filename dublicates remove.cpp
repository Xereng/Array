#include<stdio.h>

int main(){
	
	int arr[]={1,2,2,3,3,4};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	if(size<=1){
		
		printf("Array after removing duplicates: ");
		
		    for(int i=0;i<size;i++){
		    	
		    	printf("%d",arr[i]);
		    }
		    
		    return 0;
	}
	
	int uniqueSize = 1;
	
	  for(int  i=0; i<size; i++){
	  	
	  	int isDuplicates = 0;
	  	
	  	for(int j=0;j<uniqueSize;j++){
	  		
	  		if(arr[i]==arr[j]){
	  			isDuplicates=1;
	  			break;
			  }
	
           	}
           	
           	if(!isDuplicates){
           		arr[uniqueSize]=arr[i];
           		uniqueSize++;
		  }
	}
           	
           	printf("Array after removing duplicates: ");
           	
           	for(int i=0;i<uniqueSize;i++){
           		
           		printf("%d",arr[i]);
		  }
	  
	  
	  return 0;
}