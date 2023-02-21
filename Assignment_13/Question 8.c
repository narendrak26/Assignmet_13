#include<stdio.h>
int fib(int n)
{
    if((n==1)||(n==2))
        return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
int x,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The Fibonacci series if %d is\n",n);
    for(int i=1;i<=n;i++)
    {
      printf("%d ",fib(i));
    }

    return 0;
}
