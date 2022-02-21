#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("Enter a number:");
  scanf("%f", &n);
  return n;
}
float my_sqrt(float n) 
{
  float y=1;
  float x=n;
  float q=0.000001;
  while(fabs(x-y)>q)
  {
    x=(x+y)/2;
    y=n/x;
  }
  return x;
}
void output(float n,float x)
{
  printf("Square root of %f is %f\n", n, x);
}
int main()
{
  float n,x;
  n=input();
  x= my_sqrt(n);
  output(n,x);
  return 0;
}