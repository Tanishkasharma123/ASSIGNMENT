#include<stdio.h>
#include<stdlib.h>
void check(int n,int p, int s)
{
    if ( (n%p==0) || (n%s==0) )
    {
        printf("HIT");
    }
    else
    {
        printf("MISS");
    }
}
void value(int n)
{
    int m;
    m=n;
    int r,p=1,s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    check(m,p,s);
}
int main() 
{
    int n;
    printf("Enter any number-");
    scanf("%d",&n);
    value(n);
}
