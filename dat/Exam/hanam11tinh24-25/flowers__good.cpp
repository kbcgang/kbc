///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,ans=2e9;
ll m;
struct flowers{
    int val,hi;
};
flowers a[1000005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i].val>>a[i].hi;
    for(int i=1;i<=n;i++)
    {
        ll s=0;
        int ma=-1;
        for(int j=i;j<=n;j++)
        {
            s+=a[j].val;
            ma=max(ma,a[j].hi);
            if(s>=m)
            {
                ans=min(ans,ma);
                break;
            }
        }
    }
    cout<<ans%2000000000;
}