///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int n,m,p,t,B,a[100005],b[100005];
ll res,ans;
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
    cin>>n>>m>>p>>t>>B;
    for(int i=1;i<=m;i++)
        cin>>a[i];
    sort(a,a+m+1);
    for(int i=1;i<=p;i++)
        cin>>b[i];
    sort(b,b+p+1);
    
    // int a,b,c,n;
    // cin>>a>>b>>c>>n;
    // int ans=a*(n/(a+b))*c;
    // n%=(a+b)
    // cout<<ans+n*c;
}