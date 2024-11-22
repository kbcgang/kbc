#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string s;
main()
{
    if(fopen("HK3.INP","r"))
    {
        freopen("HK3.INP","r",stdin);
        freopen("HK3.OUT","w",stdout);
    }
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s[s.size()-1];
}
