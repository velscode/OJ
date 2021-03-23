include <iostream>
#include <string.h>

using namespace std;

int f[1000]={0};

int A,B,i;
long int n;
int a,b,c;
int main()
{
    while(1)
    {
        scanf("%d%d%ld",&A,&B,&n);
        if( A == 0 && B == 0 && n == 0 )
            return 0;
        
        if( n == 1 || n == 2 )
        {
            printf("1\n");
            continue;
        }
        
        f[0] = 1;
        f[1] = 1;
        
        for( i = 2; i < 50; i++ )
        {
            f[i] = ( A * f[i-1] + B * f[i-2] ) % 7;
            
            if( f[i] == 1 && f[i-1] == 1 )
            {
                break;
            }
        }
        
        printf("%d\n",f[(n-1)%(i-1)]);
    }
    return 0;
}
