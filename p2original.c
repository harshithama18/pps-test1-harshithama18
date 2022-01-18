
#include<stdio.h>

// You can return only one thing from a function at a time
// Functions are reusable block of code. meaning you can call a function 
int input()
{
  // to take input from user
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  return num;
}

int add(int a, int b)
{
  int sum;
  sum = a+b;
  return sum;
}

void output(int a, int b, int sum)
{
  // to print the final result i.e sum of 2 numbers
  printf("sum of %d and %d is %d\n", a, b, sum);
  }

  int main()
  {
    int num1, num2;
    num1 = input();
    num2 = input();

    int sum;
    sum = add(num1, num2);

    output(num1, num2, sum);

    return 0;
  }