#include <iostream>
#include <stdio.h>

using namespace std;

long long int T,A,B;

int main()
{
	cin >> T;
	
	while(T--)
	{
		cin >> A >> B;
		
		if(A%B==0)
			cout <<"YES" << endl;
		else
			cout << "NO" << endl; 
	}
	
	return 0;
}


