/*
*the elements of an array in reverse order to another array
*/


#include <stdio.h>

int main()
{
   int n, c, d, a[50], b[50];

   printf("Enter the number of elements in array:");
   scanf("%d", &n);

   printf("Enter array elements:");

   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);

   /*
    * Copying elements into array b starting from end of array a
    */

   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];



   /*
    *the end the program should be able to print both arrays
    */

   for (c = 0; c < n; c++)
      a[c] = b[c];

   printf("Reverse array is:");

   for (c = 0; c < n; c++)
      printf("%d\n", a[c]);

   return 0;
}
