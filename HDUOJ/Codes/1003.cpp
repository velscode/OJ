#include <iostream>

using namespace std;

int T,N,max1[20],L[20],R[20];

int A[100000],DP[100000];

int main()
{
    scanf("%d",&T);
    for( int t=0;t<T;t++ )
    {
        scanf("%d",&N);
        for( int i = 0; i < N; i++ )
        {
            scanf("%d",&A[i]);
        }
        
        DP[0] = A[0];
        
        for(int i=1;i<N;i++)
        {
            if( A[i] > DP[i-1]+A[i] )
            {
                DP[i] =  A[i];
            }
            else //A[i] < DP[i-1]+A[i] 
            {
                DP[i] = DP[i-1]+A[i];
            }
        }
        
        int pos = 0;
        
        max1[t] = DP[0];
            
        for(int i=0;i<N;i++ )
        {
            if( max1[t] < DP[i] )
            {
                max1[t] = DP[i];
                pos = i;
            }
        }
        
        R[t] = pos;
        L[t] = pos;
        
        
        /*for( int i = pos - 1 ; i > 1 ;i-- )
        {
            if( DP[i] < DP[i-1] && DP[i] < DP[i+1] )
            {
                L[t] = i+1;
                break;
            }
        }*/
        
        for( int i = pos - 1 ; i >= 0 ;i--  )
        {
            if( DP[i] >= 0 )
            {
                L[t] = i;
            }
            else 
            break;
        }
    }
    for( int i = 0; i < T; i++ )
    {
        printf("Case %d:\n",i+1);
        printf("%d %d %d\n",max1[i],L[i]+1,R[i]+1);
        if( i != T-1 )
        printf("\n");
    }

}