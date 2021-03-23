#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long int T,res,a;
	
	while(scanf("%ld",&T)!=EOF)
	{
		res = 1;
		while(T--)
		{
			scanf("%ld",&a);
			if( a % 2 == 1 )
			{
				res *= a;
			}
		}
		printf("%ld\n",res);
	}
	
	return 0;
}


