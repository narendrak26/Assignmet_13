#include<stdio.h>
int power(int n,int m)
{
    if(m==0)
        return 1;
    return n*power(n,m-1);
}
int main()
{
    int x,n,m;
    printf("Enter the number\n");
    scanf("%d%d",&n,&m);
    printf("%d ",power(n,m));
    return 0;
}
