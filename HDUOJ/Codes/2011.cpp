#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T,a,i;
	double res;
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%d",&a);
		res = 0;
		for(i=1;i<=a;i++)
		{
			if(i&1)
				res += 1.0/i;
			else
				res -= 1.0/i;
		}
		printf("%.2lf\n",res);
	}

	return 0;
}


