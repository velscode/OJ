#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	int T,i,n[100],tmp;
	
	while(1)
	{
		scanf("%d",&T);
		if(T==0)
			return 0;
	
		for(i=0;i<T;i++)
		{
			scanf("%d",&n[i]);
		}
		
		tmp = *(min_element(n,n+T));
		*(min_element(n,n+T)) = n[0];
		n[0] = tmp;
		
		for(i=0;i<T;i++)
		{
			printf("%d",n[i]);
			if( i!=T-1 )
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}


