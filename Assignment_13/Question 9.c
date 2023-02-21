#include<stdio.h>
int count (int n)
{
    static int c=0;
    if(n==0)
        return c;
    else
        c++;
    count(n/10);
}
int main()
{
int x,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    x=count(n);
    printf("%d",x);
    return 0;
}
