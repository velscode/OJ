#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;



int main()
{
	int n,m,tmp,i,max,val,pos;
	
	while(~scanf("%d%d",&n,&m))
	{
		pos = 0;
		val = 0;
		max = 0;
		for(i=0;i<n*m;i++)
		{
			scanf("%d",&tmp);
			if( abs(tmp) > max )
			{
				val = tmp;
				max = abs(tmp);
				pos = i;
			}
		}
		printf("%d %d %d\n",pos/m+1,pos%m+1,val);
	}
	
	return 0;
}


