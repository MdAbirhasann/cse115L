#include <stdio.h>
#include <math.h>
void grading(int sum);
int main()
{
   double num;
   int result,sum=0;
   printf("Enter your marks: ");
    scanf("%lf",&num);
   result = ceil(num);
   sum= result+5;
   printf("Your number is: %d\n",sum);
   if (sum = 92 || 89 || 86 || 82 || 79 || 86 || 72 || 69 || 66 || 60)
   {
       sum = sum+1;
       grading(sum);
   }
   else
   {
     grading(sum);
   }
   return 0;
}
void grading(int sum)
{
    if (sum >= 93 && sum <=100 )
    {
        printf("you have got A");
    }
     else if (sum >= 90 && sum <= 92)
    {
        printf("you have got A-");
    }
     else if (sum >= 87 && sum <= 89)
    {
        printf("you have got B+");
    }
      else if (sum >= 83 && sum <= 86)
    {
        printf("you have got B");
    }
      else if (sum >= 80 && sum <= 82)
    {
        printf("you have got B-");
    }
      else if (sum >= 77 && sum <= 79)
    {
        printf("you have got c+");
    }
      else if (sum >= 73 && sum <= 76)
    {
        printf("you have got C");
    }
      else if (sum >= 70 && sum <= 72)
    {
        printf("you have got C-");
    }
      else if (sum >= 67 && sum <= 69)
    {
        printf("you have got D+");
    }
      else if (sum >= 60 && sum <= 66)
    {
        printf("you have got D");
    }
      else if (sum<60)
    {
        printf("you have got F");
    }
}
