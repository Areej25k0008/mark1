#include<stdio.h>
int trib(int n)
{
    if(n==0)
	return 0;
    if(n==1||n==2)
	return 1;
    int a=0,b=1,c=1,d,i;
    for(i=3;i<=n;i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    return c;
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("trib=%d",trib(n));
    return 0;
}

