#include<stdio.h>
int input_array_size()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    return n;
}
void input_array(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the numbers of the array:\n");
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n,int a[n])
{
    int i;int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
} 
void output(int n,int a[n],int sum)
{
    int i; 
    for(i=0;i<(n-1);i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d = %d\n",a[n-1],sum);
}
int main()
{
    int n,sum,a[1000];
    n=input_array_size();
    input_array(n,a);
    sum=sum_n_array(n, a);
    output(n,a, sum);
    return 0;
  }
