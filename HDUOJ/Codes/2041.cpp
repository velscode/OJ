#include<stdio.h>

int main()
{
    int n,i,j,k,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=0;
        b=1;
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d\n",a);
    }
    return 0;
}
