#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T,r1,r2,r3;
	double a;
	while(1)
	{
		r1=r2=r3=0;
		scanf("%d",&T);
		if( T==0 )
			return 0;
		while(T--)
		{
			scanf("%lf",&a);
			if(a<0) r1++;
			if(a==0) r2++;
			if(a>0) r3++;
		}
		
		printf("%d %d %d\n",r1,r2,r3);
	}
	return 0;
}


