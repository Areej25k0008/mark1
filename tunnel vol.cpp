#include<stdio.h>
int main()
{
    int n,l,w,h;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&l,&w,&h);
        if(h<41)
        {
            int vol=l*w*h;
            printf("%d\n",vol);
        }
    }
    return 0;
}

