#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int res,a,T;
	
	while(1)
	{
		scanf("%d",&T);
		
		if(T==0)	
			return 0;
			
		res = 0;
		
		while(T--)
		{
			scanf("%d",&a);
			res+=a;
		}
		
		printf("%d\n",res);
	}	

	return 0;
}


