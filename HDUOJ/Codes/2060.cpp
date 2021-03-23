#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int BN,PS,OS;
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
		cin >> BN >> PS >> OS;
		
		while(BN)
		{
			if(BN>6)
			{
				PS += (1+7);
				BN--;
			}
			else
			{
				PS += 8-BN;
				BN--;
			}
		}
		
		if(PS>=OS)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	
	return 0;
}


