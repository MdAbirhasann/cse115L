/* Write a program that searches for duplicate numbers in an array.
If the program finds duplication of numbers, it will print the index of those numbers and the numbers themselves as well.*/


#include <stdio.h>

void findDup (int arr[], int n);
int main()
{
    int size;
    printf("Enter array range:\n");
    scanf("%d", &size);

    int arr[size];

    for (int i=0; i<size; i++)
	{
        scanf("%d",&arr[i]);
    }
    findDup(arr, size);

    return 0;
}
void findDup (int arr[], int n)
{
    int i, j;
    for(i=0;i<n; i++)
    {
        for (j=i+1;j<n; j++)
        {
        if(arr[i]==arr[j+1]);
        {

        printf("%d",arr[i]);
        }
        }
    }
}
