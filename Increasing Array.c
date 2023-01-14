#include<stdio.h>

int main()
{
    long long int n,i;
    long long int move=0;
    scanf("%lld",&n);

    long long int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&A[i]);
    }

    long long int start=A[0];
    for(i=1;i<n;i++)
    {
        if(A[i]<A[i-1])
        {
            move+=(A[i-1]-A[i]);
            A[i]=A[i-1];
        }
    }
    printf("%lld",move);
}
