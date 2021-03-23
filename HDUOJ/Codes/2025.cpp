#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
	char str[101],max;
	int i,len;
	
	while(~scanf("%s",&str))
	{
		len = strlen(str);
		max = *(max_element(str,str+len));
		for(i=0;i<len;i++)
		{
			printf("%c",str[i]);
			if(str[i]==max)
			{
				printf("(max)");
			}
		}
		printf("\n");
	}
	
	return 0;
}


