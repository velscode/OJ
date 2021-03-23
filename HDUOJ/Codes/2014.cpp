#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	int n[100],sum,T,i;
	
	while(~scanf("%d",&T))
	{
		sum=0;
		for(i=0;i<T;i++)
		{
			scanf("%d",&n[i]);
			sum+=n[i];
		}
		
		sum -= *(max_element(n,n+T));
		sum -= *(min_element(n,n+T));
		
		printf("%.2lf\n",1.0*sum/(T-2));
	}
	
	return 0;
}


