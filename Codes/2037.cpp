#include <iostream>
#include <stdio.h>

using namespace std;

struct TV{
	int start;
	int end;
}tv[101];

void TV_Sort( struct TV tv[], int n )
{
	int min,pos;
	
	for( int i = 0; i < n-1; i++ )
	{
		min = tv[i].end;
		pos = i;
		for( int j = i; j < n; j++ )
		{
			if( tv[j].end < min )
			{
				min = tv[j].end;
				pos = j;
			}
		}
		tv[100] = tv[i];
		tv[i] = tv[pos];
		tv[pos] = tv[100];
	}
}

int main()
{
	int T,tmp,res;
	
	while(1)
	{
		cin >> T;
		
		if( T == 0 )
		{
			return 0;
		}
		
		for(int i = 0; i < T; i++)
		{
			cin >> tv[i].start >> tv[i].end;
		}
		
		TV_Sort(tv,T);
		
		res = 1;
		
		tmp = tv[0].end;
		
		for( int i = 1; i < T; i++ )
		{
			if( tv[i].start >= tmp )
			{
				tmp = tv[i].end;
				res++;
			}
		}
		cout << res << endl;
		
	}
	
	return 0;
}


