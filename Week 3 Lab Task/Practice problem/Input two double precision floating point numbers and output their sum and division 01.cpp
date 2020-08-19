#include<stdio.h>
int main()
{
	double var1, var2;
	int result1,result2;
	scanf("%lf%lf", &var1, &var2);
	result1 = var1 + var2;
	result2 = var1 / var2;
	printf("%lf + %lf = %d\n", var1, var2, result1);
	printf("%lf / %lf = %d\n", var1, var2, result2);
return 0;
}
