#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    float avg=0;
    printf("enter five numbers: ");
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);


    avg = (a+b+c+d+e)/5;

    printf("Average is: %f",avg);


    return 0;
}
