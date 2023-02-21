#include<stdio.h>
int HCF(n,m)
{
    if(m==0)
  return n;
    else
        return HCF(m,n%m);
}
int main()
{
    int x,n,m;
    printf("Enter two number\n");
    scanf("%d%d",&n,&m);
    printf("The HCF of %d and %d is\n",n,m);
    x=HCF(n,m);
    printf("%d",x);
    return 0;

}
