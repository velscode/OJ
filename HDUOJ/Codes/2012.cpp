#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int isPrime( long int n )
{
	long int i, max = sqrt(n);
	
	for(i=2;i<max;i++)
	{
		if( n % i == 0 )
			return 0;
	} 
	
	return 1;
}

int main()
{
	int x,y,i;
	
	while(1)
	{
		scanf("%d%d",&x,&y);
		if(x==0&&y==0)
			return 0;
		
		for(i=x;i<=y;i++)
		{
			if( isPrime(i*i+i+41) == 0 )
			{
				break;
			}
		}
		
		if(i==y+1)
		printf("OK\n");
		else
		printf("Sorry\n");	
	}
	
	return 0;
}


