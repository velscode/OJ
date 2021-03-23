#include <stdio.h>

int T;

char A[20][2000];
char B[20][2000];
char R[20][2000];

void Big_Number_Add( char A[], char B[], char R[] );

int main()
{
    int i ;
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        scanf("%s%s",A[i],B[i]);
        Big_Number_Add(A[i],B[i],R[i]);
    }
    
    for(i=0;i<T;i++)
    {
        printf("Case %d:\n",i+1);
        printf("%s + %s = %s",A[i],B[i],R[i]);
        if(i!=T-1)
        printf("\n\n");
        else
        printf("\n");
    }
    
    return 0;
}

/**
  * @name   Big_Number_Add
  * @brief  基于字符串的大数相加函数
  * @author Velscode 
  * @para   R[] is the string of result of A+B
  */
void Big_Number_Add( char A[], char B[], char R[] )
{
    long long int len_a = 0, len_b = 0,i,j;
    unsigned char carry_bit = 0, next_carry_bit = 0 ;
    char * p;
    
    //calculate length of A[]
    p = A;
    
    while( *p != '\0' )
    {
        p++;
        len_a++;
    }
    
    
    //calculate length of B[]
    p = B;
    
    while( *p != '\0' )
    {
        p++;
        len_b++;
    }
    
    if( len_a > len_b )
    {
        R[len_a+1] = '\0';
        
        for( i = 0; i < len_b; i++)
        {
            R[len_a-i] =      ( (A[len_a-1-i] - '0' + B[len_b-1-i] - '0') + carry_bit ) % 10 + 48;
            next_carry_bit =  ( (A[len_a-1-i] - '0' + B[len_b-1-i] - '0') + carry_bit ) / 10;
            carry_bit = next_carry_bit;
        }
        
        for( ; i < len_a; i++)
        {
            R[len_a-i] =      ( (A[len_a-1-i] - '0') + carry_bit ) % 10 + 48;
            next_carry_bit =  ( (A[len_a-1-i] - '0') + carry_bit ) / 10 ;
            carry_bit = next_carry_bit;
        }
        
        if( carry_bit != 0 )
            R[0] = carry_bit + 48;
        else
        {
            for(i=0;i<len_a;i++)
                R[i] = R[i+1];
        
            R[i] = '\0';
        }

    }
    
    if( len_a < len_b )
    {
        R[len_b+1] = '\0';
        
        for( i = 0; i < len_a; i++)
        {
            R[len_b-i] =      ( (A[len_a-1-i] - '0' + B[len_b-1-i] - '0') + carry_bit ) % 10 + 48;
            next_carry_bit =  ( (A[len_a-1-i] - '0' + B[len_b-1-i] - '0') + carry_bit ) / 10;
            carry_bit = next_carry_bit;
        }
        
        for( ; i < len_b; i++)
        {
            R[len_b-i] =      ( (B[len_b-1-i] - '0') + carry_bit ) % 10 + 48;
            next_carry_bit =  ( (B[len_b-1-i] - '0') + carry_bit ) / 10 ;
            carry_bit = next_carry_bit;
        }
        
        if( carry_bit != 0 )
            R[0] = carry_bit + 48;
        else
        {
            for(i=0;i<len_b;i++)
                R[i] = R[i+1];
        
            R[i] = '\0';
        }

    }
    
    if( len_a == len_b )
    {
        R[len_a+1] = '\0';
        
        for( i = 0; i < len_a; i++)
        {
            R[len_b-i] =      ( (A[len_a-1-i] - '0' + B[len_b-1-i] - '0') + carry_bit ) % 10 + 48;
            next_carry_bit =  ( (A[len_a-1-i] - '0' + B[len_b-1-i] - '0') + carry_bit ) / 10;
            carry_bit = next_carry_bit;
        }
        
        if( carry_bit != 0 )
            R[0] = carry_bit + 48;
        else
        {
            for(i=0;i<len_a;i++)
                R[i] = R[i+1];
        
            R[i] = '\0';
        }

    }
    
    
    return ;
}