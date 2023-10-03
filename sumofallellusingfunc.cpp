#include<stdio.h>

int sumArray(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	int array[]={1,2,3};
	int length=sizeof(array)/sizeof(array[]);
	int sum=sumArray(array,length);
	printf("sum: %d",sum);
	return 0;
}