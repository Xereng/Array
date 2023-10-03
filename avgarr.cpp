#include<stdio.h>
int main(){
int arr[]={1,2,3,5,6};
int n=sizeof (arr)/sizeof(arr[0]);
int sum=0;
   
   for(int i=0;i<n;i++)
{
	sum+=arr[i];
}
float av=(float)sum/n;
printf("result:  %f\n",av);
printf("length:%d ",n);
return 0;
}