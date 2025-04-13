///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
ll l,r;
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
    ll t;
    cin>>t;
    // zero();
    while(t--)
    {
        cin>>l>>r;
        l--;
        ll a=0,b=0;
        while(l>0)
        {
            a+=l/5;
            l/=5;
        }
        while(r>0)
        {
            b+=r/5;
            r/=5;
        }
        cout<<b-a<<"\n";
    }
}