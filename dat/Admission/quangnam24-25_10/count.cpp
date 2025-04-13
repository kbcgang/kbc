///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a[100005],n1,x,m;
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
    cin>>n1>>m;
    for(int i=1;i<=n1;i++)
    {
        cin>>x;
        if(x>=m)a[n++]=i;
    }
    a[n]=n1+1;
    for(int i=0;i<n;i++)
        ans+=1ll*a[i]*(a[i+1]-a[i]);
    cout<<ans;
}