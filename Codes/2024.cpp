#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,len,j,flag;
    char a[50];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        flag=1;
        gets(a);
        if(a[0]>='0'&&a[0]<='9')
        flag=0;
        len=strlen(a);
        for(j=0;j<len;j++)
        {
            if(a[j]==32)
            flag=0;
            if(!((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||a[j]=='_'||(a[j]>='0'&&a[j]<='9')))
            flag=0;
        }
        
        if(flag==0)
        printf("no\n");
        else
        printf("yes\n");
    }
}
