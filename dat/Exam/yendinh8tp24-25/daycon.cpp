///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n,k;
ll a[100005];
bool check(ll x)
{
    for(ll i=1;i+x-1<=n;i++)
        if(a[i+x-1]-a[i-1]>k)
            return 0;
    return 1;
}
void ChatGPT()
{
    ll ans=-1;
    ll l=0,r=n;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(check(m)){
            ans=m;
            l=m+1;}
        else r=m-1;
    }
    cout<<ans;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }
    ChatGPT();
}