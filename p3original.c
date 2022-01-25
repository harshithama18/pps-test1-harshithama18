//add wo numbers
#include<stdio.h>
void input(int *a, int *b)
{
  printf("Enter the two numbers\n");
  scanf("%d%d" , a, b);
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("sum of %d+%d=%d\n" ,a,b,sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b); //pass by reference
  add(a,b,&sum); //pass by value(a,b) and reference(sum)
  output(a,b,sum); //pass by value
  return 0;

}