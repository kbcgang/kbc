///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int m,n,p[100005],ans;
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
    cin>>m>>n;for(int i=0;i<m;i++)cin>>p[i];
    sort(p,p+m,greater<int>());
    for(int i=0;i<n;i++)ans=max(ans,p[i]*(i+1));cout<<ans;
}