#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,length,num;
    char a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=0;
        a[0]='\0';
        scanf("%s",&a);
        length=strlen(a);
        for(j=0;j<length/2;j++)
        {
            if(a[j]==a[length-j-1])
            num++;
            else
            break;
        }
        if(num==length/2)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}
