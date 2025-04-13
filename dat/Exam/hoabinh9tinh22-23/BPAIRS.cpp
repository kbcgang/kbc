///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
map<int,int>dem;
long long x,ans;
long long tcs(long long n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return 1ll*s;
}
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
        cin>>x;
        x=tcs(x);
        // cout<<m<<" ";
        dem[(int)x]++;
    }
    for(auto i:dem)
    {
        ans+=1ll*i.second*(i.second-1)/2;
    }
    cout<<ans;
}