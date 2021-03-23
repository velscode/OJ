#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int a[51];
	
	a[1] = 3;
	a[2] = 6;
	a[3] = 6;
	
	for(int i = 4; i < 51; i++)
		a[i] = a[i-1] + a[i-2] * 2;
	
	int T;
	
	while(~scanf("%d",&T))
	{
		cout << a[T] << endl;
	}
	return 0;
}


