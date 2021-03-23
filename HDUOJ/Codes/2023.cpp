#include <iostream>
#include <stdio.h>

using namespace std;

int r[50][5];
double ave1[50];
double ave2[5];

int main()
{
	int n,m,i,j,t;
	while(~scanf("%d%d",&n,&m))
	{
		for(i=0;i<m;i++)
			ave2[i]=0;
			
		for(j=0;j<n;j++)
		{
			ave1[j]=0;
			for(i=0;i<m;i++)
			{
				scanf("%d",&r[j][i]);
				ave1[j]+=r[j][i];
				ave2[i]+=r[j][i];
			}
			ave1[j] /= m;
		}
		
		for(i=0;i<m;i++)
			ave2[i]/=n;
		
		for(i=0;i<n;i++)
		{
			printf("%.2lf",ave1[i]);
			if( i!=n-1 )
				printf(" ");
		}
		printf("\n");
		
		for(i=0;i<m;i++)
		{
			printf("%.2lf",ave2[i]);
			if( i!=m-1 )
				printf(" ");
		}
		printf("\n");
		
		t=0;
		for( i=0;i<n;i++ )
		{
			for( j=0;j<m;j++ )
			{
				if( r[i][j] < ave2[j] )
					break;
			}
			if( j == m )
				t++;
		}
		
		printf("%d\n\n",t);
		
	}
	return 0;
}


