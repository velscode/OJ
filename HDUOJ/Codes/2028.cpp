#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	int i,T,a[100005];
	long int tmp,min;
	
	while( ~scanf("%d",&T) )
	{
		for(i=0;i<T;i++)
		{
			scanf("%d",&a[i]);
		}
		
		tmp = min = *(min_element(a,a+T));
		
		while( 1 )
		{
			for(i=0;i<T;i++)
			{
				if(tmp%a[i]!=0)
					break;
			}
			if(i==T)
				break;
			else
				tmp += min;
		}
		
		printf("%ld\n",tmp);
	}
	
	return 0;
}


