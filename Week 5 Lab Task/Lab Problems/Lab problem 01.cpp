#include <stdio.h>

int main() {
	int i;
	printf("Even numbers between  to 100 :\n");
	for (i = 0; i <= 100; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
	return 0;
}
