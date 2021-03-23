#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	int T;
	double a[3];
	
	cin >> T;
	
	while(T--)
	{
		cin >> a[0] >> a[1] >> a[2];
		sort(a,a+3);
	
		
		if( a[0] + a[1] > a[2] && a[2]-a[1]<a[0] && a[2]-a[0]< a[1])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}
	
	return 0;
}


