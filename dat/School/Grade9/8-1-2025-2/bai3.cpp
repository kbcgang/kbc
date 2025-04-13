///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,x;
int dem[10],ans;
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
    cin>>n;
    while(n--){cin>>x;
    dem[x]++;}
    ans+=dem[4];
    int t=min(dem[1],dem[3]);ans+=t;
    dem[1]-=t;
    dem[3]-=t;
    ans+=dem[3];
    ans+=dem[2]/2;
    dem[2]%=2;
    if(dem[2]==1){ans++;dem[2]=0;dem[1]=max(dem[1]-2,0);}
    ans+=(dem[1]+3)/4;
    cout<<ans;
}