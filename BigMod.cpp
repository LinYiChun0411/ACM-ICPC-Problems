#include<stdio.h>

long long modpow( long long B, long long P, long long M )
{
    if( P == 0 )
        return 1;
    else if( P == 1 ) 
        return B%M;
    else
    {
        long long result = modpow( B, P/2, M );
        if( P % 2 )
            return result * result * B % M; 
        else
            return result * result % M;
        
    }
}

int main()
{
    long long B, P, M;
    while( scanf( "%lld%lld%lld", &B, &P, &M ) != EOF )
    {
        long long i = 0;
        long long R = modpow( B, P, M );
        printf( "%lld\n", R );
    }
    return 0;
}
