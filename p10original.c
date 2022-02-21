#include<stdio.h>
typedef struct complex{
  int realpart;
  int imgpart;
}complex;
complex input()
{
 complex n;
 printf("Enter the values of a and b:");
 scanf("%d %d",&n.realpart,&n.imgpart);
 return n; 
}
complex add(complex a,complex b)
{
  complex sum;
  sum.realpart=a.realpart+b.realpart;
  sum.imgpart=a.imgpart+b.imgpart;
  return sum;
}
void output(complex a,complex b,complex sum)
{
  printf("%d + %di + %d + %di is %d + %di",a.realpart,a.imgpart,b.realpart,b.imgpart,sum.realpart,sum.imgpart);
}
int main()
{
  complex a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
  }
 
