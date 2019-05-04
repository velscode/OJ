#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n,m,i,t,f;
	
	while(~scanf("%d%d",&n,&m))
	{
		f=0;
		i=1;
		while(i<=n)
		{	
			if(i+m>n)
				t = n-i+1;
			else
				t = m;
			
			if(f) printf(" ");	
				
			printf("%d",(i*2*t+t*(t-1))/t);
			f=1;
			
			i+=m;
		}
		printf("\n");

	}
	
	return 0;
}


