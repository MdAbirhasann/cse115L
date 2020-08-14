#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,m,n;
    
    int a[8][10];
    
    int sum=0;
    
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of coloumnes:");
    scanf("%d",&n);

    for(i=0;i<m;i++)
	{
        for(j=0;j<n;j++)
		{
            printf("\na[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
	{
        for(j=0;j<n;j++)
		{
            printf("\n%10d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
	{
        for(j=0;j<n;j++)
		{
            if(j==1)
            sum=sum+a[i][j];
        }
    }
    printf("Sum of 2 number column:%d",sum);

    return 0;
}
