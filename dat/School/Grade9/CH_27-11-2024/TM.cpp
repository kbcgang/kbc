///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long a[1000005],Max[1000005],ans=LLONG_MIN;
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
    for(int i=0;i<n;i++)    cin>>a[i];
    Max[0]=a[0];
    for(int i=1;i<n;i++)    Max[i]=max(Max[i-1],a[i]);
    for(int i=1;i<n;i++)    ans=max(ans,a[i]+Max[i-1]);
    cout<<ans;
}