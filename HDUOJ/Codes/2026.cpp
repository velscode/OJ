#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

char str[101];
int i,len;

int main()
{
	while(gets(str))
	{
		len = strlen(str);
		
		if(isalpha(str[0]))
			str[0]-=32;
		
		for(i=1;i<len;i++)
		{
			if( isalpha(str[i]) && str[i-1] == ' ' )
			{
				str[i]-=32;
			}
		}
		puts(str);
	}
	return 0;
}


