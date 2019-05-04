#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
	int N,R;
	
	while(~scanf("%d%d",&N,&R))
	{
		stack<char> s;
		
		if(N<0)
		{
			printf("-");
			N=-N;
		}
		
		while(N>0)
		{
			char temp;
			
			if( N % R >= 10 )
				temp = 'A' + (N%R)-10;
			else
				temp = '0' + N%R;
				
			s.push(temp);
			
			N/=R;
		}
		
		while(!s.empty())
		{
			printf("%c",s.top());
			s.pop();
		}
		printf("\n");
	}
	
	return 0;
}


