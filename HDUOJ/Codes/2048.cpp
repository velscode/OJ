#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double a[21],sum[21];
	
	a[1]=0;
	a[2]=1;
	
	for(int i = 3; i < 21; i++)
	{
		a[i] = (i-1)*(a[i-1]+a[i-2]);
	}
	
	sum[1] = 1;
	
	for(int i = 2; i < 21; i++)
	{
		sum[i] = sum[i-1]*i;
	}
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int n;
		
		cin >> n;
		
		printf("%.2lf%%\n",(a[n]/sum[n])*100);
	}
	
	return 0;
}


