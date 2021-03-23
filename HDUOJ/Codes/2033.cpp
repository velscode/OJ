#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T;
	int A1,A2,A3,B1,B2,B3;
	
	cin >> T;
	
	while(T--)
	{
		cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;
		
		A3 += B3;
		if( A3 >= 60 )
		{
			A3 -= 60;
			A2++;
		}
		
		A2+=B2;
		if( A2 >= 60 )
		{
			A2 -= 60;
			A1++;
		}
		A1+=B1;
		
		cout << A1 << " " << A2<< " " << A3 <<endl;
	}
	
	return 0;
}


