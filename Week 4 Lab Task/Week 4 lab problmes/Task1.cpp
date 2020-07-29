#include <stdio.h>

int main()
{
    char a;
    int x,y,result=0;

    printf("an operator: ");
    scanf("%s", &a);

    switch(a)
    {
        case '+':
            printf("enter first operand : ");
            scanf("%d",&x);
            printf("enter second operand : ");
            scanf("%d",&y);
            result=x+y;
            printf("The result is :%d",result);
            break;
        case '-':
            printf("enter first operand : ");
            scanf("%d",&x);
            printf("enter second operand : ");
            scanf("%d",&y);
            result=x-y;
            printf("The result is :%d",result);
            break;
        case '*':
            printf("enter first operand : ");
            scanf("%d",&x);
            printf("enter second operand : ");
            scanf("%d",&y);
            result=x*y;
            printf("The result is :%d",result);
            break;
        case '/':
            printf("enter first operand : ");
            scanf("%d",&x);
            printf("enter second operand : ");
            scanf("%d",&y);
            result=x/y;
            printf("The result is :%d",result);
            break;

        default:
            printf("Sorry! Please enter operator between '+' , '-' , '*' , '/' ");

    }

    return 0;
}
