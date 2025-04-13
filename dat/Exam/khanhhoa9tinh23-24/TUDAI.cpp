///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
string ans;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>s)
    {
        if(s.size()>=ans.size())
            ans=s;
    }
    cout<<ans.size()<<"\n";
    cout<<ans;
}