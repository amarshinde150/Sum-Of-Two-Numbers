#include<stdio.h>
int sum(int a,int b)
{
  return a+b;
}
int main()
{
  int a,b;
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("Sum of two numbers %d and %d is %d",a,b,sum(a,b));
  return 0;
}
