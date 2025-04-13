///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a[10005];ll ans;
map<int,int> dem;
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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dem[2*a[i]]++;
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            dem[2*a[i]]--;
            dem[2*a[j]]--;
            ans+=dem[a[i]+a[j]];
            dem[2*a[i]]++;
            dem[2*a[j]]++;
        }cout<<ans;
}