///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,ans;
ll x,s,pre[500005];
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
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        pre[i]=pre[i-1]+x;
    }
    sort(pre+1,pre+n+1);
    int l=0;
    for(int i=1;i<=n;i++)
    {
        if(abs(pre[i])>s)
            ans++;
        while(l<i&&pre[i]-pre[l+1]>s)
            l++;
        ans+=l;
    }
    cout<<ans;
}
