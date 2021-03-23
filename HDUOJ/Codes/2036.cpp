#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

double x[101],y[101],res;

int main()
{
	int T;
	
	while(1)
	{
		cin >> T;
		if(T==0)
		{
			return 0;
		}
		
		res = 0;
		
		for(int i = 0 ; i < T; i++)
			cin >> x[i] >> y[i];
		
		for(int i = 0; i < T-1; i++)
			res += x[i]*y[i+1]-y[i]*x[i+1];
			
		res += x[T-1]*y[0]-y[T-1]*x[0];
		
		res = 0.5*abs(res);
		
		printf("%.1lf\n",res);
			
	}
	return 0;
}


