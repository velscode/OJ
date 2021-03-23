#include <iostream>
#include <string.h>
#include <stack>
#include <stdio.h>

using namespace std;

long long int Hex2Dec( char str[] )
{
	long long int res = 0;
	bool isNegative = false;
	int len = strlen(str);


	
	for(int i = 0; i < len; i++)
	{
		if(str[i] == '-')
		{
			isNegative = true;
			continue;
		}
		if( str[i] == '+' )
			continue;
		
		res *= 16;
		
		if( isalpha(str[i]) )
			res += (str[i] - 'A') + 10;
		else
			res += str[i] - '0';
	}
	
	if( isNegative )
		return -res;
	else
		return res;
}

void Dec2Hex( long long int n, char str[] )
{
	stack<char> s;
	int pos = 0;
	
	if(n==0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	
	if(n<0)
	{
		str[0] = '-';
		pos = 1;
		n = -n;
	}
	
	while(n)
	{
		if(n%16<10)
			s.push(n%16+'0');
		else
			s.push(n%16-10+'A');
		n/=16;
	}
	
	while(!s.empty())
	{
		str[pos++] = s.top();
		s.pop();
	}
	str[pos] = '\0';
}

int main()
{
	char s1[20],s2[20],s3[20];
	
	while(~scanf("%s%s",s1,s2))
	{
	/*	cout << "s1:" << s1 << endl;
		cout << "s1 value:" << Hex2Dec(s1) << endl;
		cout << "s2:" << s2 << endl;
		cout << "s1 value:" << Hex2Dec(s2) << endl;
		cout << "(Hex2Dec(s1)+Hex2Dec(s2)):" << (Hex2Dec(s1)+Hex2Dec(s2)) << endl;*/
		
		Dec2Hex((Hex2Dec(s1)+Hex2Dec(s2)),s3);
		
		cout << s3 << endl;
	}
	
	return 0;
}


