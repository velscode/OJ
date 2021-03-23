#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char str[100005];

int main()
{
	int T,len,i,res;
	
	scanf("%d",&T);
	getchar();
			
	while(T--)
	{
		res = 0;
		
		gets(str);
		
		len = strlen(str);
		
		for(i=0;i<len;i++)
		{
			if(((str[i]&0xFF)>=0x80)&&((str[i+1]&0xFF)>=0x80))
			{
				res++;
				i++;
			}
		}
		
		printf("%d\n",res);
	}
	
	return 0;
}


