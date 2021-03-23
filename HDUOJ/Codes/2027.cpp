#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	char str[101];
	int n[5];
	int T,i,len,f=0;
	
	scanf("%d",&T);
	getchar();
	
	while(T--)
	{
		if(f!=0)
			printf("\n");
		
		for(i=0;i<5;i++)
			n[i] = 0;
			
		gets(str);
		len = strlen(str);
		
		for(i=0;i<len;i++)
		{
			switch( str[i] )
			{
				case 'a':n[0]++;break;
				case 'e':n[1]++;break;
				case 'i':n[2]++;break;
				case 'o':n[3]++;break;
				case 'u':n[4]++;break;
				default : break;
			}
		}
			
		printf("a:%d\n",n[0]);
		printf("e:%d\n",n[1]);
		printf("i:%d\n",n[2]);
		printf("o:%d\n",n[3]);
		printf("u:%d\n",n[4]);
		
		f=1;
		
	}
	
	return 0;
}


