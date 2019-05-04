#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T,t,res,a;
	
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%d",&t);
		
		res = 0;
		
		while(t--)
		{
			scanf("%d",&a);
			res+=a;
		}
		
		printf("%d\n",res);
		
		if( T != 0 )
		{
			printf("\n");
		}
	}
	
	return 0;
}


