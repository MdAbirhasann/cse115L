#include<stdio.h>

void search(int arr[], int size, int key);

int main(){

    int value[5]={4,3,2,9,12};
     int key;
    int y;
    printf("Enter the element to search:\t");
    scanf("%d",&key);

     search(value,5,key);

    return 0;
}
void search(int arr[],int size,int key)
{

 	for(int i=0;i<5;i++){
    if(arr[i]==key){
     printf("Found");
     break;
    }

     else
		{
        	printf("Not Found");
        	break;
     	}

	 }

 }
