#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long int i,a,b,t;
	long int r1,r2;
	
	while(scanf("%ld%ld",&a,&b)!=EOF)
	{
		if(a>b)
		{
			t=a;
			a=b;
			b=t;
		}
		
		r1=0;
		r2=0;
		
		for(i=a;i<=b;i++)
		{
			if( i % 2 == 0)
				r1+=(i*i);
			else
				r2+=(i*i*i);
		}
		
		printf("%ld %ld\n",r1,r2);
	}
	
	return 0;
}


