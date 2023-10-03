#include<stdio.h>
int  main(){

int n;
printf("enter the nyumber of el: ");
scanf("%d",&n);

int myarr[n];

printf("enter arr ele: ");
for(int i=0;i<n;i++){
	
	scanf("%d",&myarr[i]);
}

int min=myarr[0];
int max=myarr[0];

for(int i=0;i<n;i++){
	
	if(myarr[i]<min){
		
		min=myarr[i];
	}
	if (myarr[i]>max){
		
		max=myarr[i];
	}
}

printf("small:%d\n",min);
printf("large:%d",max);

return 0;
}