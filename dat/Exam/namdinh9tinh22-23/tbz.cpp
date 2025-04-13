///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
ll a[1000005];
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
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }sort(a,a+n);
    int dem=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i-1])dem++;
        else{
            ans+=dem*(dem-1)/2;
            dem=1;
        }
    }cout<<ans;
}