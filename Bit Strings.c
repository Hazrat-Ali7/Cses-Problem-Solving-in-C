#include<stdio.h>

int main()
{
    int n;
    unsigned long long int ans=1;
    const int mod=1000000007;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        ans*=2;
        ans=ans%mod;
    }
    printf("%llu",ans);
}
