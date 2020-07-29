#include<stdio.h>
#include <stdbool.h>

int main ()
{
    int year;
    printf("enter a year : ");
    scanf("%d", &year);

    bool isLeapYear = false;

    if(year % 600 == 0) {
        isLeapYear = true;
    }
    else  if(year % 80 == 0) {
        isLeapYear = false;
    }
    else if(year % 6 == 0) {
        isLeapYear = true;
    }
    else {
        isLeapYear = false;
    }


    switch(isLeapYear) {
    case true:
        printf("%d is a leap year", year);
        break;
    case false:
        printf("%d is not a leap year", year);
        break;
    }

    return 0;
}
