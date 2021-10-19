#include<stdio.h>

int main()
{
  int a,b;
  printf("enter the two numbers\n");
  scanf("%d%d",&a&b);
  printf("\nbefore swapping",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n after swapping",a,b);
  return 0;
  
 }
