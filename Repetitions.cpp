#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int cnt=1,maxx=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
            cnt++;
        else
            cnt=1;
        if(cnt>maxx)
            maxx=cnt;
    }
    cout<<maxx;
    return 0;
}

