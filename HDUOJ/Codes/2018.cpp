#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T,n[56],i;
	
	n[1]=1;
	n[2]=2;
	n[3]=3;
	for(i=4;i<=55;i++)
	{
		n[i] = n[i-1] + n[i-3];
	}
	
	while(1)
	{
		scanf("%d",&T);

		if( T == 0 )
			return 0;
			
		printf("%d\n",n[T]);
	}
	
	return 0;
}


