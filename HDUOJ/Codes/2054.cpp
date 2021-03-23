#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

char s1[100007],s2[100007];
	
void remove_zero(char s[])
{
	int l = strlen(s);	
	
	for(int i = 0; i < l; i++)
	{
		if( s[i] == '.' )	//如果有小数点，安排 
		{
			for(int j = l-1; j > 0; j--)
			{
				if(s[j] != '0')
				{
					if(s[j] == '.')
						s[j] = '\0';
					else
						s[j+1] = '\0';	
					break;
				}
			}
		}
	}
}

int main()
{
	while(~scanf("%s%s",s1,s2))
	{
		remove_zero(s1);
		remove_zero(s2);
		
		cout << "s1 : " << s1 << endl;
		cout << "s2 : " << s2 << endl;
		
		if(strcmp(s1,s2)==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}


