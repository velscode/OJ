#include<stdio.h>
#include<string.h>
int main()
{
    int j,i,n,flag,flag1,length;
    char password[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&password);
        length=strlen(password);
        if(length>=8&&length<=16)
        flag1=1;
        else
        flag1=0;
        for(j=0;j<length;j++)
        {
            if(password[j]>='a'&&password[j]<='z')
            {
                flag++;
                break;
            }
        }
        
        for(j=0;j<length;j++)
        {
            if(password[j]>='A'&&password[j]<='Z')
            {
                flag++;
                break;
            }
        }
        
        for(j=0;j<length;j++)
        {
            if(password[j]>='0'&&password[j]<='9')
            {
                flag++;
                break;
            }
        }
        
                for(j=0;j<length;j++)
        {
            if(password[j]=='~'||password[j]=='!'||password[j]=='@'||password[j]=='#'||password[j]=='$'||password[j]=='%'||password[j]=='^')
            {
                flag++;
                break;
            }
}
        
        if(flag>=3&&flag1==1)
        {
            printf("YES\n");
            flag=0;
            flag1=0;
        }
        else
        printf("NO\n");
                    flag=0;
            flag1=0;
    }
    return 0;
}
