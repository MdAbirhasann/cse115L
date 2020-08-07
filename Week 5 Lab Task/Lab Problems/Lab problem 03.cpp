#include<stdio.h>
int main()
{
    int i,N,sum;
     
    printf("Enter the value of N: ");
    scanf("%d",&N);
    
    sum=0;
     
    for(i=1;i<=N;i++)
        sum= sum+ i;
     
     
    printf("Sum of the series is: %d\n",sum);
     
    return 0;
}
