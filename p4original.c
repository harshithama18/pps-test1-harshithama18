#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d", &a);
  return a;
}
int cmp(int a, int b, int c)
{
  if(a>b && a>c);
    return a;
  
  if (b>c)
   return b;
  
  else 
   return c;
}
void output(int a, int b,int c,int large)
{
  printf("%d is the greatest number\n",large);
}
int main()
{
  int a, b, c, large;
  a=input();
  b=input();
  c=input();
  large=cmp(a, b, c);
  output(a,b,c,large);
  return 0;
}