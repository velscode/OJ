#include <iostream>
#include <stdio.h>

using namespace std;

char str[32];
int K;
double C;
double S;
double SUM,SUMC;
int f,f2=0;

int main()
{
	int N;
	
	cin >> N;
	
	while(N--)
	{
		f=0;
		SUM=0;
		SUMC=0;
		
		cin >> K;
		
		for(int i = 0; i < K; i++)
		{
			cin >> str;
			cin >> C;
			cin >> S;
			
			if(S<60) f=1;
			
			SUMC+=C;
			SUM+=C*S;
		}
		
		if(f2)	cout << endl;
		f2=1;
		
		if(f)
		{
			cout << "Sorry!" << endl;
		}
		else
		{
			printf("%.2lf\n",SUM/SUMC);
		}
	}
	return 0;
}


