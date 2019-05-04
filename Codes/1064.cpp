#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T = 12;
	double res = 0,a;
	
	while(T--)
	{
		scanf("%lf",&a);
		res+=a;
	}
	res /= 12;
	
	printf("$%.2lf\n",res);
	
	return 0;
}


