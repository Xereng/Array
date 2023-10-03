#include<stdio.h>

void findMaxAndMin(int arr[],int size,int *min, int *max){
	
	if(size<=0){
		
		return;
	}
	
	*min=*max=arr[0];
	
	for(int i=0;i<size;i++){
		
		if (arr[i]<*min){
			
			*min=arr[i];
		}
		else if(arr[i]>*max){
			*max=arr[i];
		}
	}
}

int main(){
	
	int size;
	
	printf("enter the number of ele: ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("enter the el: ");
	
	for(int i=0;i<size;i++){
		
		scanf("%d",&arr[i]);
	}
	
	int Minv,maxv;
	
	findMaxAndMin(arr,size,&Minv,&maxv);
	
	printf("small:%d",Minv);
	printf("large:%d",maxv);
	
	return 0;
}
