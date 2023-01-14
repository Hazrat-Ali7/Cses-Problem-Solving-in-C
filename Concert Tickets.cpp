#include<bits/stdc++.h>
using namespace std;

int searching(vector<long long int> A,int fn)
{
    if(A.size()==0)
        return -1;
    if(A.size()==1)
        return 0;
    int l,h,mid=1;
    l=0;
    h=A.size()-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(A[mid]==fn)
            return mid;
        else if(fn<=A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return mid-1;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int m,n;
    cin>>m>>n;

    vector<long long int> A;
    vector<long long int> B;
    A.resize(m);
    B.resize(n);

    for(int i=0;i<m;i++)
        cin>>A[i];

    for(int i=0;i<n;i++)
        cin>>B[i];

    sort(A.begin(),A.end());

//    for(int i=0;i<m;i++)
//        cout<< A[i]<< " ";

    int chk;
    for(int i=0;i<n;i++)
    {
        chk = searching(A,B[i]);
        if(chk==-1)
            cout<< "-1\n";
        else if(A[chk]>B[i])
            cout<< "-1\n";
        else
        {
            cout<< A[chk] << "\n";
            A.erase(A.begin()+chk);
        }
    }
    return 0;
}

