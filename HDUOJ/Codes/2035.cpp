#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long int A,B,R;
	
	while(1)
	{
		cin >> A >> B;
		
		if(A==0&&B==0)
			return 0;
		R=1;
		for(int i = 0 ; i < B; i++)
		{
			R*=A;
			R = R%1000;
		}
		cout << R << endl;
		
	}
	
	return 0;
}


