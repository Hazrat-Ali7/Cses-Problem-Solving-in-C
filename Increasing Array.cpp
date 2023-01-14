#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin>>n;

    vector<int> A;
    A.resize(n);

    for(int i=0;i<n;i++)
        cin>>A[i];
    long long int moves=0;
    for(int i=1;i<n;i++)
    {
        if(A[i]<A[i-1])
        {
            moves+=A[i-1]-A[i];
            A[i]=A[i-1];
        }
    }

    cout<<moves;

    return 0;
}
