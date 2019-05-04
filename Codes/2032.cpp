#include <iostream>
#include <stdio.h>

using namespace std;

int a[32][32]={0};

int main()
{
	FILE * fp;

	int T;

	fp = fopen("YanghuiTrigger.txt","w");
	
	fprintf(fp,"t[32][32]={");
	
	for(int i=0;i<32;i++)
	{
		a[i][0]=1;
	}
	
	for(int i = 1;i<32;i++)
	{
		for(int j=1;j<i;j++)
		{
			a[i][j] = a[i-1][j-1]+a[i-1][j];
		}
	}
	
	for(int i = 0; i < 32; i++)
	{
		fprintf(fp,"{");
		for(int j=0;j<i;j++)
		{
			fprintf(fp,"%d,",a[i][j]);
		}
		fprintf(fp,"},\n");
	}
	
	fprintf(fp,"};");
	
	fclose(fp);
	
	return 0;
}


