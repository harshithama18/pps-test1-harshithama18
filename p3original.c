#include<stdio.h>
void input(int *a, int *b)
{
  printf("Enter a number\n");
  scanf("%d %d", a, b);
}
void add(int a, int b, int *c)
{
  *c=a+b;
}
void output(int a, int b, int c)
{
  printf("%d+%d=%d\n",a,b,c);
}
int main()
{
  int a, b, c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0;
}