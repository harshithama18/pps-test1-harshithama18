#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  {
    for(i=1;n>=i;i++)
    sum=sum+i;
  }
  return sum;
}
void output(int n, int sum)
{
  printf("The sum of all %d =%d",n,sum);
}
int main()
{
  int x,y;
  x=input_n();
  y=sum_n(x);
  output(x,y);
  return 0;
}




//for(i=1;n>=i;i++)           //n=5
   // sum=sum+i;
//sum=+1  sum=1
//sum=1+2    sum=3
//sum=3+3  sum=6
//sum=6+4   sum=10
//sum=10+5    sum=15



//sum=1+1 =2         // n=3
//sum=2+2=4
//sum=4+3=7