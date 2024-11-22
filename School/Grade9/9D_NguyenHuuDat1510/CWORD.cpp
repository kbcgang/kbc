///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
int ans;
bool check(string s)
{
    if(s.size()==1)
        return 1;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
            return 0;
    }
    return 1;
}
main()
{
     if(fopen("CWORD.inp","r"))
    {
        freopen("CWORD.inp","r",stdin);
        freopen("CWORD.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>s)
    {
        ans+=check(s);
    }
    cout<<ans;
}