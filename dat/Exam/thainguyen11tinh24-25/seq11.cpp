///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a[1000005];
int n,d=1,ma=1;
ll ans=-inf,res;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
   res=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            d++;
            res+=a[i];
        }
        else
        {
            if(d>ma) ans=res;
            if(d==ma) ans=max(ans,res);
            ma=max(ma,d);
            d=1;
            res=a[i];
        }
    }
    if(d>ma) ans=res;
    if(d==ma) ans=max(ans,res);
    cout<<ans;
}