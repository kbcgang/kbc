///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
map<string,int> dem;
int ans1,ans2;
bool checkpalind(string s)
{
    for(int i=0;i<s.size()/2;i++)
        if(s[i]!=s[s.size()-1-i])
            return 0;
    return 1;
}
kien()
{
    if(fopen("BAI04.inp","r"))
    {
        freopen("BAI04.inp","r",stdin);
        freopen("BAI04.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>s)
    {
        ans2+=checkpalind(s);
        dem[s]++;
    }
    for(auto i:dem)
    {
        if(i.second==1)
            ans1++;
    }
    cout<<ans1<<"\n"<<ans2;
}