#include<stdio.h>
int ways(int n)
{
    int a=1,b=1,c,i;
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("ways=%d",ways(n));
    return 0;
}

