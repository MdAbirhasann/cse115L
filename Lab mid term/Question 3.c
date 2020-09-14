#include <stdio.h>
void swap(int x, int y);
int main()
{
    int x = 10, y = 5;
    printf("Enter a value for x= ");
    scanf("%d",&x);
    printf("Enter a value for y= ");
    scanf("%d",&y);
    printf("X = %d\n",x);
    printf("Y = %d\n",y);
    swap(x,y);

    return 0;
}
void swap(int x, int y)
{
    x = x * y;
    y = x / y;
    x = x / y;
    printf("After Swapping: x = %d, y = %d", x, y);
}
