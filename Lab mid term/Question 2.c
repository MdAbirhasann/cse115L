#include<stdio.h>
void sumOfSeries(int n);
int main()
{
    int n;

    printf("Please enter a value for 'n' : ");
    scanf("%d",&n);
    sumOfSeries(n);
    return 0;
}

void sumOfSeries(int n)
{
    float sum = 0.0, fact;
    int num = 1, count;

    while(num <= n)
    {
        fact = 1;
        for(count = 1; count <= num; count++)
        {
            fact = fact * count;
        }
        sum = sum + (num / fact);
        num++;
    }
    printf("Sum of series is %f\n", sum);
}
