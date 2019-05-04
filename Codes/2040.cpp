#include<stdio.h>

int main()
{
    int n,i,a,b;
    int temp1[500],temp2[500];
    int j,k,l;
    int sum1,sum2;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        for(j=1,k=0;j<a;j++)
        {
            if(a%j==0)
            {
                temp1[k]=j;
                k++;
            }
        }
        
        for(sum1=0,j=0;j<k;j++)
        {
        //    printf("%d\t",temp1[j]);
            sum1+=temp1[j];
        }
        
        for(j=1,l=0;j<b;j++)
        {
            if(b%j==0)
            {
                temp2[l]=j;
                l++;
            }
        }
        
        
        for(sum2=0,j=0;j<l;j++)
        {
        //    printf("%d\t",temp2[j]);
            sum2+=temp2[j];
        }
        
        if(sum1==b&&sum2==a)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
