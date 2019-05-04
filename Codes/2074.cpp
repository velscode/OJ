#include <iostream>
#include <stdio.h>

using namespace std;

char res[80][80];
int n,t;
char ch[2],f,g,h=0;

int main()
{
	while(~scanf("%d%s%s",&n,&ch[0],&ch[1]))
	{
		getchar();
		
		if(((n+1)/2)%2==0)
			f=1;
		else
			f=0;
		
		for(int i = 0; i < n; i++)
		{
			g=f;

			int j=0;
			
			t = (i-0)<(n-1-i)?(i-0):(n-1-i);

			for(int k = 0;k<t;k++)
			{
				res[i][j++] = ch[g];
				g=1-g;
			}
			
			for(int k = 0; k < n-t*2;k++)
			{
				res[i][j++] = ch[g];
			}
			g=1-g;
			for(int k = 0;k<t;k++)
			{;
				res[i][j++] = ch[g];
				g=1-g;
			}
		}
		
		if(n!=1)
		{
			res[0][0] = ' ';
			res[0][n-1] = ' ';
			res[n-1][0] = ' ';
			res[n-1][n-1] = ' ';
		}
		
		if(h)
			cout << endl;
		h=1;
		
		for(int i = 0; i < n; i++)
		{
			for( int j = 0; j < n; j++)
			{
				cout << res[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}


