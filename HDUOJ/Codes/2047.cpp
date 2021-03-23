#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int a[41];
	
	a[1]=3;
	a[2]=8;
	
	for(int i = 3; i < 41; i++)
		a[i] = 2*(a[i-1]+a[i-2]);
		
	int T;
	
	while(~scanf("%d",&T))
	{
		cout << a[T] << endl;
	}
	
	return 0;
}


