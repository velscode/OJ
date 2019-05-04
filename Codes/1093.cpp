#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T,a,res,i;
	
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%d",&i);
		res  =0;
		while(i--)
		{
			scanf("%d",&a);
			res+=a;
		}
		printf("%d\n",res);
	}
	
	return 0;
}


