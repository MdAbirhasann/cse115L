#include<stdio.h>
int main()
{
    int x;
    printf("ENTER AN INTEGER: ");
    scanf("%d",&x);

    if(x % 7 == 0)
    {
        printf("%d is a multiple of 7",x);
    }
    else
    {
        printf("%d is not a multiple of 7",x);
    }

    return 0;
}
