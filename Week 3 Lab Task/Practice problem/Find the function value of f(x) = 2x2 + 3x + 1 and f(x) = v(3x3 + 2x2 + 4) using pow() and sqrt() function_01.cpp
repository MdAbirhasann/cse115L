#include<stdio.h>
#include<math.h>
int main()
{
	int x, result;
	printf("Enter a number:");
	scanf("%d",&x);
	result = 2*pow(x,2)+3*x+1;
	printf("%d",result);
return 0;
}
