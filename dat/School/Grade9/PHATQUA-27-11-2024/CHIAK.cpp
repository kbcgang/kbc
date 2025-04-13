///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n,k,s;
unordered_map<ll,ll> dem;
ll a[1000005];
ll ans;
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
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=((a[i]%k)+k)%k;
    }
    // for(int i=0;i<n;i++) cout<<a[i]<<" ";
    // cout<<-5%3;
    dem[0]++;
    for(int i=0;i<n;i++)
    {
        s=1ll*(s+a[i])%k;
        ans+=dem[s];
        dem[s]++;
    }
    cout<<ans;
}