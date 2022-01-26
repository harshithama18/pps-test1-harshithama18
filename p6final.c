#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number :");
  scanf("%d", &a);
  return a;
}
int sum(int a)
{
  int i, total=0;
  for(i=1;i<=a;i++)
  {
    total=total+i;
  }
  return total;
}
void output(int a,int total)
{
  int i;
  for( i=1;i<a;i++)
  {
    printf("%d+", i);
  }
  for(i=1;i<=a;i++)
  {
  if(i==a)
  {
    printf("%d=", i);
  }
  }
printf("%d is a function prototype \n", total);
}
int main()
{
  int a,total;
  a=input();
  total=sum(a);
  output(a,total);
  return 0;
}