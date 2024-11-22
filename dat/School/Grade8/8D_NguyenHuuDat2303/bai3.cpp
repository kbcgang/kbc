#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int t;
int sinu(string s)
{
    int t=0;
    for(int i=0;i<s.size();i++)
        t+=s[i]-48;
    return t;
}

main()
{
    freopen("bai3.inp","r",stdin);
    freopen("bai3.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>s;
        int m=sqrt(sinu(s));
        if(m*m==sinu(s)) cout<<"1\n";
        else cout<<"0\n";
    }
}
