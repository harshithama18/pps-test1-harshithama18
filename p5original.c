#include<stdio.h>
void input(int *a, int *b, int *c)
{
  printf("Enter 3 number:\n");
  scanf("%d %d %d", a, b, c);
}
void cmp(int a, int b, int c, int *result)
{
 if(a>b && a>c)
 {
   *result=1;
 }
 else if(b>a && b>c)
 {
   *result=2;
 }
 else if(c>a && c>b)
 {
   *result=3;
 }
 else if(a==b && a==c)
 {
   *result=4;
 }
 else
 {
   *result=0;
 }
}
void output(int result)
{
  if(result==1)
  {
    printf("a is greater");
  }
  if(result==2)
  {
    printf("b is greater");
  }
  else if(result==3)
  {
    printf("c is greater");
  }
  else if(result==4)
  {
    printf("All are equal");
  }
}
int main()
{
  int a, b, c, result;
  input(&a,&b,&c);
  cmp(a, b, c, &result);
  output(result);
  return 0;
}