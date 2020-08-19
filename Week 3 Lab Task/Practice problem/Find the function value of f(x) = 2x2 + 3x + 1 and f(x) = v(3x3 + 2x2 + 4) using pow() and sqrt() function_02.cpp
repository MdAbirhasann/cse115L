#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	double result;
	printf("Enter a number:");
	scanf("%d",&x);
	result = sqrt(3*pow(x,3)+2*pow(x,2)+4);
	printf("%lf",result);
return 0;
}
