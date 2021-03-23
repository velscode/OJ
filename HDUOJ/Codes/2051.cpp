#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
	int n;
	
	while(~scanf("%d",&n))
	{
		stack<int> s;
		while(n)
		{
			s.push(n&1);
			n = n>>1;
		}
		while(!s.empty())
		{
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
	
	return 0;
}


