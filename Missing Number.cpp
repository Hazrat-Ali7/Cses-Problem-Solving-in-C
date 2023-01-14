#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n,x;
    cin>>n;
    unsigned long long int sum =(n*n+n)/2;
    for(int i =1;i<n;i++)
    {
        cin>>x;
        sum-=x;
    }
    cout<< sum <<"\n";
    return 0;
}

