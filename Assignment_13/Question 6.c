#include<stdio.h>
int fact(int n)
{
  if(n==1)
  return 1;
  return n*fact(n-1);
}
int main()
{
    int x,n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("The Factorial of %d is\n",n);
    x=fact(n);
    printf("%d",x);
    return 0;
}
