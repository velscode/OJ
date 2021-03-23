#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char str[1000];
	double number,price;
	double sum = 0;
	while(~scanf("%s%lf%lf",str,&number,&price))
		sum+=number*price;
	
	printf("%.1lf\n",sum);
	
	return 0;
}


