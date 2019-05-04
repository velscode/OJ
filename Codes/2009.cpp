#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
	double a;
	int b;
	double res;
	while(~scanf("%lf%d",&a,&b))
	{
		res = 0;
		while(b--)
		{
			res+=a;
			a = sqrt(a);
		}
		printf("%.2lf\n",res);
	}
	
	return 0;
}


