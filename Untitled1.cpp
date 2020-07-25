#include<stdio.h>
int main()
{
    float a;

    printf("enter a number: ");
    scanf("%d",&a);
    if (a < 0)
    {
        printf("the number is NEGATIVE real.");

    }
    else if(a > 0)
    {
        printf("the number is POSITIVE real.");
    }
    else if (a > 0.10 )
    {
        printf("the number is RATIONAL.");
    }
    else if(a < 0.10)
    {
       printf("the number is IRRATIONAL.");
    }
    else
        printf("the number is ZERO.");


    return 0;
}
