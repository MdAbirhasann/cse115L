#include <stdio.h>
int main() 
{
   double radius;
   float area, perimeter;
   printf("enter radius: ");
   scanf("%lf",&radius);

   perimeter = 2*3.14*radius;
   printf("Perimeter of the Circle = %f\n", perimeter);

	area = 3.14*radius*radius;
	printf("Area of the Circle = %f\n", area);

return(0);
}

