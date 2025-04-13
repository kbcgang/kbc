///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
// dãy cuối cunmg là ~44500
ll a,b,t;
ll s,s1;
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
    a--;
    for(ll i=1; ;i++)
    {
        t+=i;
        s=(s+i*i)%mod;
        if(t>=a)
        {
            s=((s-(t-a)*i%mod)+mod)%mod;
            break;
        }
    }
    t=0;
    // cout<<s;
    for(ll i=1; ;i++)
    {
        t+=i;
        s1=(s1+i*i)%mod;
        if(t>=b)
        {
            s1=((s1-(t-b)*i%mod)+mod)%mod;
            break;
        }
    }
    // cout<<"choi "<<s1<<"\n";
    cout<<s1-s;
}