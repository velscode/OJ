#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
	long long int N,M;
	
	while(1)
	{	
		scanf("%lld%lld",&N,&M);
		
		if(N==0&&M==0)
			return 0;
	
		for(long long int n = sqrt(2.0*M); n > 0; n--)
		{
			long long int a1 = M/n-(n-1)/2;
			if( M==(0.5*n*n+(a1-0.5)*n) && a1>0 )
			{
				cout << "[" << a1 << "," << a1+n-1 << "]" << endl;
			}
		}
		
		cout << endl;
	}
	
	return 0;
}


