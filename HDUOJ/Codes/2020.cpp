#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
	int a[101],T,i,j,max,pos;
	
	while(1)
	{
		scanf("%d",&T);
		
		if(T==0)
			return 0;
			
		for(i=0;i<T;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for( i = 0; i < T-1; i++ )
		{
			pos = i;
		
			max = abs(a[i]);
			
			for(j=i+1;j<T;j++)
			{
				if(max < abs(a[j]))
				{
					pos = j;
					max = abs(a[j]);
				}
			}
			
			a[100] = a[i];
			a[i] = a[pos];
			a[pos] = a[100];
		}
		
		for(i=0;i<T;i++)
		{
			printf("%d",a[i]);
			if(i!=T-1)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}


