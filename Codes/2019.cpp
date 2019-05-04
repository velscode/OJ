#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	int i,n,m,a[101],pos;
	
	while(1)
	{
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
			return 0;
			
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<n;i++)
		{
			if(m<a[i])
			{
				pos=i;
				break;
			}
		}
		for(i=n;i>=pos;i--)
		{
			a[i]=a[i-1];
		}
		a[pos]=m;
		
		for(i=0;i<n+1;i++)
		{
			printf("%d",a[i]);
			if(i!=n)
			printf(" ");
		}
		printf("\n");
		
	}
	
	return 0;
}


