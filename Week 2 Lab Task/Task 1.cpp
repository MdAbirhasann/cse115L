#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if (x > 0)
    {
        printf("%d is a POSITIVE number",x);
    }

    else if (x < 0)
    {
        printf("%d is a NEGATIVE number",x);
    }
    else
    {
        printf("your input is a ZERO");
    }
    return 0;
}
