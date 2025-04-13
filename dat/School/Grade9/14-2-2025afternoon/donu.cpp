///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,k;int ans;
bool a[1000005];
void KBCGPT(int l,int r)
{
    if(n-r+1>=k) ans=max(ans,r+k-l);
    if(l>k) ans=max(ans,r-l+k);
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
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int l=0,r=1;
    for(;r<=n+1;r++)
    {
        if(a[r]==0)
        {
            l++;
            KBCGPT(l,r);
            l=r;
        }
    }
    cout<<ans;
}