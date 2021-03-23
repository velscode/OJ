#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T;
	char str[12];
	
	cin >> T;
	
	while(T--)
	{
		cin >> str;
		cout << '6';
		for(int i = 0; i < 5; i++)
			cout << str[6+i];
		cout << endl;
	}
	
	return 0;
}


