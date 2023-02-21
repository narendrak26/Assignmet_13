#include<stdio.h>
int sum(n)
{
    if(n==1)
        return (2);
    return((2*n)+sum(n-1));

}
int main()
{
    int x,n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("The sum of 1 to %d even natural number is\n",n);
    x=sum(n);
    printf("%d",x);
    return 0;
}
