///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll R;
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
    cin>>R;
    for(ll x=R-1;x>=1;x--)
    {
        ll y=sqrt(R*R-x*x);
        if(x*x+y*y<=R*R)
        {
            ans=max(ans,4*x*y);
        }
    }
    cout<<ans;
}