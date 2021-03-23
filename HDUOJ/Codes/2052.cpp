#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n,m;
	
	while(~scanf("%d%d",&n,&m))
	{
		cout << "+";
		for(int i = 0; i < n; i++)
			cout << "-";
		cout << "+" << endl;
		
		for(int i = 0 ; i < m ; i++)
		{
			cout << "|";
			for(int j = 0; j < n; j++)
				cout << " ";
			cout << "|" << endl;
		}
		
		cout << "+";
		for(int i = 0; i < n; i++)
			cout << "-";
		cout << "+" << endl << endl;
	}
	
	return 0;
}


