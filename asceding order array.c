#include<stdio.h>

void arrangeAscending(int um[],int n)

{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		
		{
			if (um[j]<um[i])
			
			{
				
				int temp=um[i];
				 um[i]=um[j];
				um[j]=temp;
				
			}
			
		}
	}
	
}

   int main()
{
    
       int num[5],i,number;      
       
   	
                  printf("enter the values:\n");
                  
                  for(int i=0;i<5;i++)
                  {
                  
                      scanf("%d",&num[i]);
                  }
                  
                  arrangeAscending(num,5);
                  
                  printf("Array:\n");
                  
                  for(int i=0;i<5;i++)
                  {
                  
                       printf("%d\n",num[i]);
                  }
                  
                  
         int newValue;
         
         printf("Enter the new value:\n");
         
         scanf("%d",&newValue);
         
         	num[5]=newValue;
         	
         	arrangeAscending(num,6);
         	
         	printf("Array after new value inserting:\n");
         	
         	   for(int i=0;i<6;i++)
         	   {
         	   	printf("%d\n",num[i]);
		   }

	return 0;
}