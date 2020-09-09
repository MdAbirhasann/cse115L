/* Write a program that will take two arrays as input from users. Later your program needs to merge
those arrays and will also sort the array in ascending/descending order. */

#include <stdio.h>

void mergeAndSort(int n1, int arr1[], int n2, int arr2[]);
int main()
{
    int size1, size2;
    printf("Enter range for array 1:");
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        printf("A [%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter range for array2:");
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("B [%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    mergeAndSort(size1, arr1, size2, arr2);

    return 0;
}

void mergeAndSort(int n1, int arr1[], int n2, int arr2[])
{
    int i,j,k,n3=n1+n2;
    int arr3[n3];
    for (i = 0; i < n1; i++)
    {
        arr3[i]=arr1[i];
    }
    for (j=0;j<n2;j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    printf("\nNew array after merging:");
    for (i=0;i<n3; i++)
    {
        printf("%d",arr3[i]);
    }
    for (i = 0;i<n3; i++)
    {
        for (k =0; k<n3 - 1;k++)
        {
            if (arr3[k] >= arr3[k+1])
            {
                int temp;
                temp = arr3[k + 1];
                arr3[k + 1] = arr3[k];
                arr3[k] = temp;
            }
        }
    }
        printf("\nNew array after merging and sorting (descending):");
        for (i=0;i<n3;i++)
    {
        printf("%d",arr3[i]);
    }
}
