#include<stdio.h>
int main()
{
  int num1,num2;
  float sum;
  printf("Enter two numbers:\n");
  scanf("%d%d" , &num1,&num2);
  sum= num1 + num2;
  printf("Addition of %d+%d is %f\n",num2,num1,sum);
  return 0;
}