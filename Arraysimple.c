#include<stdio.h>

   int main()
{
    
       int num[5],i,number;      
       
   	
                  printf("enter the values:\n");
                  
                  for(int i=0;i<5;i++)
                  {
                  
                      scanf("%d",&num[i]);
                  }
                  
                  printf("Array:\n");
                  
                  for(int i=0;i<5;i++)
                  {
                  
                       printf("%d",num[i]);
                  }

	return 0;
}