#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string s;
main()
{
    if(fopen("COVID.INP","r"))
    {
        freopen("COVID.INP","r",stdin);
        freopen("COVID.OUT","w",stdout);
    }
    getline(cin,s);
    while(s[s.size()-1]==' ')
        s.erase(s.size()-1,1);
    while(s[0]==' ')
        s.erase(0,1);
    for(int i=0;i<s.size();i++)
    if(s[i]==' '){
        s.erase(i,1);i--;
    }
    cout<<s<<" chien thang Covid "<<s.size()<<" lan";
}
