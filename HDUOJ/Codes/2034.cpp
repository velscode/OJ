#include <iostream>
#include <stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int N,M;
	int n[101],tmp,a[101],r[101],cnt;
	
	while(1)
	{
		cnt=0;
		cin >> N >> M;
		if(N==0&&M==0)
			return 0;
		for(int i = 0 ; i < N ;i++)
		{
			cin >> n[i];
			a[i] = 1;
		}
		for(int i = 0 ; i < M ;i++)
		{
			cin >> tmp;
			for(int j = 0; j < N; j++)
			{
				if(a[j] && n[j]==tmp)
				{
					a[j] = 0;
					cnt++;
				}
			}
		}
		
		if(cnt==N)
		{
			cout << "NULL";
		}
		else
		{	
			cnt = 0;
			for(int i = 0 ; i < N; i++)
			{
				if(a[i])
				{
					r[cnt++]=n[i];
				}
			}
			sort(r,r+cnt);
			for(int i = 0; i < cnt; i++)
			{
			 	cout << r[i] << " ";
			}
		}
		
		cout << endl;
		
	}
	
	return 0;
}


