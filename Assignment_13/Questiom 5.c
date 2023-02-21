#include<stdio.h>
int sum(n)
{
    if(n%10==n)
        return n;
    return ((n%10)+sum(n/10));
}
int main()
{
    int x,n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("The sum of digit of 1 to %d number is\n",n);
    x=sum(n);
    printf("%d",x);
    return 0;
}
