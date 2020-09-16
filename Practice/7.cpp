#include<stdio.h>

int main()
{
   double a, b, c;

    printf("Enter 3 numbers:\n");
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a >= b && a >= c)
    {
        if(b >= c)
        {

            printf("\n\nthe 2nd largest number is: %.2lf\n", b);
        }
        else
        {
            printf("\n\nthe 2nd largest number is: %.2lf\n", c);
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            printf("\n\nthe 2nd largest number is: %.2lf\n", a);
        }
        else
        {
            printf("\n\nthe 2nd largest number is: %.2lf\n", c);
        }
    }

    else if(a >= b)
    {
        printf("\n\nthe 2nd largest number is: %.2lf\n", a);
    }
    else
    {
        printf("\n\nthe 2nd largest number is: %.2lf\n", b);
    }
    return 0;
}
