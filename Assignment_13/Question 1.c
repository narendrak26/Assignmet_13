#include<stdio.h>

int sum(int n)
{
    if(n==1)
    return 1;
    return n+sum(n-1);
}
int main()
{
    int x,n;
    printf("Enter the limit to find sum of a number\n");
    scanf("%d",&n);
    printf("The sum of 1 to %d  natural number is\n",n);
    x=sum(n);
    printf("%d",x);
    return 0;
}
