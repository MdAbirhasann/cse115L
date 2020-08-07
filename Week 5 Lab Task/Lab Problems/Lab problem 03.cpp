#include <stdio.h>
int main()
	{
	int i,n, term = 1, sum = 1;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	sum = sum + term;
	}
	printf("Sum = %d", sum);
	return 0;
}
