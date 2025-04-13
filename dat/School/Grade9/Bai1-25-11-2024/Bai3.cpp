///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
int a,ans=mod;
map<int,int> dem;
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
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        dem[a]++;
    }
    for(auto i:dem)
    {
        if(i.second==1)
            ans=min(ans,i.first);
    }
    if(ans==mod)
        cout<<-1;
    else cout<<ans;
}
