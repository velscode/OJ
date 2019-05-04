#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int m,n,f,i;
	
	while(~scanf("%d%d",&m,&n))
	{
		f=0;
		for(i=m;i<=n;i++)
		{
			if( (i/100)*(i/100)*(i/100) + (i/10%10)*(i/10%10)*(i/10%10) + (i%10)*(i%10)*(i%10) == i )
			{
				if(f==1)
					printf(" ");
				printf("%d",i);
				f=1;
			}
		}

		if(f==0)
		{
			printf("no\n");
		}else
		{
			printf("\n");
		}
	}
	
	return 0;
}


