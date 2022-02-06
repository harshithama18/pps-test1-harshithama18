#include<stdio.h>
void input(int *a, int *b, int *c)
{
  printf("Enter 3 numbers:\n");
  scanf("%d %d %d", a, b, c);
}
void cmp(int a, int b, int c, int *result)
{
  if(a>b && a>c)
  {
    *result=a;
  }
  else if(b>c)
  {
    *result=b;
  }
  else
  { 
    *result=c;
  }
  
}
void output(int a, int b, int c, int large)
{
  printf("The largest number is %d\n",large);
}
int main()
{
  int a, b, c, large;
  input(&a,&b,&c);
  cmp(a, b, c, &large);
  output(a,b,c,large);
  return 0;
}