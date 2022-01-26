#include<stdio.h>
int input()
{
  int a ;
  printf("Enter a number:\n");
  scanf("%d", &a);
  return a;
}
int sum(int a, int b)
{
  int c;
  c=a+b;
  return c;
}
void output(int a, int b, int c)
{
  printf("%d+%d=%d\n",a, b, c);
}
int main()
{
  int a, b, c;
  a=input();
  b=input();
  c=sum(a,b);
  output(a,b,c);
  return 0;
}