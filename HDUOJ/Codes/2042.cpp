#include<stdio.h>

int f(int t)
{
    if(t==1)
    return 3;
    else
    return (f(t-1)-1)*2;
}

int main()
{
    int i,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        printf("%d\n",f(k+1));
    }
    return 0;
}


