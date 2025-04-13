///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,d;
ll a,b;
ll ans;
void ChatGPT()
{
    ll res=(a-b+d)/d;
    ans+=res;
    b+=res*d;
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
    cin>>n>>d;
    while(n--)
    {
        cin>>b;
        if(a>=b)ChatGPT();
        a=b;
    }cout<<ans;
}