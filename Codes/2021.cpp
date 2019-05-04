#include <iostream>
#include <stdio.h>

using namespace std;

#define DENOMINATION_NUM 6 
int denomination[DENOMINATION_NUM] = {100,50,10,5,2,1};	//³®Æ±Ãæ¶î 

int getMinBanknoteNumber( int money )
{
	int res = 0,i;
	
	for(i=0;i<DENOMINATION_NUM;i++)
	{
		while(money>=denomination[i])
		{
			res++;
			money-=denomination[i];	
		}
	}
	return res; 
}

int main()
{
	int T,tmp,res;
	
	while(1)
	{
		res = 0;
		scanf("%d",&T);
		{
			if(T==0)	return 0;
			
			while(T--)
			{
				scanf("%d",&tmp);
				res+=getMinBanknoteNumber(tmp);
			}
		}
		printf("%d\n",res);
	}
	
	return 0;
}



