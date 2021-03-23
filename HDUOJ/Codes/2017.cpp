#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
	int T,n=0;
	char str[10000];
	char *s;
	scanf("%d",&T);

	while(T--)
	{
		n=0;
		scanf("%s",str);
		s = str;
		while(*s!='\0')
		{
			if(isdigit(*s))
				n++;
			s++;
		}
		printf("%d\n",n);
	}
	return 0;
}


