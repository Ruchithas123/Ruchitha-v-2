#include<stdio.h>
int main() 
{
  int y;
  printf("enter the year");
  scanf("%d",&y);
  if(y%4==0 && y%100!=0)
  {
    printf("the year is leap");
      }
 else if(y%400==0)
 {
   printf(" the year is century leap year");
 }
else if(y%100==0)
{
  printf("the year is century year but not leap year");
}
else
{
  printf("it is neither a century year nor a leap year");
}
return 0;
}

