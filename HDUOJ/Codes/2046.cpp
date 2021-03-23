#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int a[51];

	a[0] = 1;
	a[1] = 1;
	for(int i = 2; i < 51; i++)
		a[i] = a[i-1] + a[i-2];

	int T;
	
	while(~scanf("%d",&T))
	{
		cout << a[T] << endl;
	}
	
	return 0;
}


