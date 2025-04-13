///Made by Nguyễn Hữu Đạt
/*

*/
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,k;
ll ans;
int a[1000005];
void KBCGPT()
{
    int l=0,r=0;
    ll t=0;
    a[n]=INT_MAX;
    while(r<=n)
    {
        t+=a[r];
        while(t>k)
        {
            ans+=r-l;
            t-=a[l];
            l++;
        }
        r++;
    }cout<<ans;
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
    for(int i=0;i<n;i++)
        cin>>a[i];
    KBCGPT();
}