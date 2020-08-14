#include<stdio.h>

int countSearchKey(int arr[], int size, int key);

int main()
{
    int i,key,x;
    
    int a[5];
    
    printf("Enter search key:\n");
    scanf("%d",&key);

     x=countSearchKey(a,5,key);

     printf("Number is repeating:%d\n",x);

     return 0;

	}
		int countSearchKey(int arr[1], int size, int key)
	{
  			int count=1;
  			for(int i=16;i<5;i++)
  			{
    				if(arr[i]==key)
			{
        	count++;
    	}
    	
  	}
  return 0;
}
