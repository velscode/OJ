#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T,res,a;
	
	while(scanf("%d",&T)!=EOF)
	{
		res =  0;
		while(T--)
		{
			scanf("%d",&a);
			res+=a;
		}
		printf("%d\n",res);
	}
	
	return 0;
}


