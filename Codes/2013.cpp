#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n;
	long int res = 0;
	
	while(~scanf("%d",&n))
	{
		n=n-1;
		res = 1;
		while(n--)
		{
			res = 2*(res+1);
		}	
		printf("%d\n",res);
	}
	
	return 0;
}


