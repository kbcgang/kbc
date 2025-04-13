///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long t,s[100005];
int n,k;
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
    s[0]=n;
    t=n;
    for(int i=1;i<=k;i++)
    {
        s[i]=(s[i-1]+t)%mod;
        t=(t+s[i])%mod;
    }
    cout<<s[k];
}