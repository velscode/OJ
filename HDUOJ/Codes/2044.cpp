#include <iostream>
#include <stdio.h>

using namespace std;

long long int f[52];

int main()
{
	f[1]=1;
	f[2]=2;
	f[3]=3;
	for(int i = 4; i < 52; i++)
	{
		f[i] = f[i-2]+f[i-1];
	}
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int a,b;
		
		cin >> a>>b;
		
		cout << f[b-a] << endl;
	}
	
	return 0;
}


