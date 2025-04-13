///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a,b,c;
ll product(int a,int b,int c)
{
    a%=c;
    ll ans=0;
    while(b>0)
    {
        if(b&1) ans=(ans+a)%c;
        a=a*2%c;
        b/=2;
    }
    return ans;
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
    cin>>a>>b>>c;
    ll ans=1;
    a%=c;
    while(b>0)
    {
        if(b&1) ans=product(ans,a,c)%c;
        a=product(a,a,c)%c;
        b/=2;
    }
    cout<<ans%c;
}