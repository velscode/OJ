#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long int n;
	
	while(~scanf("%d",&n))
	{
		long int cnt = 0;
		for(int i = 1; i <= n; i++)
		{
			if(n%i==0)
				cnt++;
		}
		if(cnt%2==0)
			cout << "0" << endl;
		else
			cout << "1" << endl;
	}
	
	return 0;
}


