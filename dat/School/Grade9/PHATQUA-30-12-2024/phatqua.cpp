///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a,b;int ans;
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
    cin>>a>>b;
    for(ll i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            if(b%i==0) ans++;
            if(b%(a/i)==0&&i*i!=a) ans++;
        }
    }
    cout<<ans;
}