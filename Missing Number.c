#include<stdio.h>

int main ()
{
    long long int n,sum=0;
    scanf("%lld",&n);

    sum=(n*n+n)/2;

    for(int i=1; i<n;i++)
    {
        long long int x;
        scanf("%lld",&x);
        sum-=x;
    }
    printf("%lld\n",sum);
}
