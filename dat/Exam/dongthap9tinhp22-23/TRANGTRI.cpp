///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int n,k,a[50005],ans;
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
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    a[n]=INFINITY;
    int res=1;
    for(int i=0;i<=n;i++)
    {
        if(a[i+1]-a[i]<=k)
            res++;
        else{
            ans=max(ans,res);
            res=1;
        }
    }
    cout<<ans;
}