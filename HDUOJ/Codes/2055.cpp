#include <iostream>
#include <stdio.h>

using namespace std;

int value(char ch)
{
	if( ch >= 'A' && ch <= 'Z' )
		return (ch-'A'+1);
	else
		return -(ch - 'a' + 1);
}

int main()
{
	int T,tmp;
	char ch;
	
	cin >> T;
	
	while(T--)
	{
		cin >> ch >> tmp;
		cout << value(ch)+tmp << endl;	
	}
	
	return 0;
}


