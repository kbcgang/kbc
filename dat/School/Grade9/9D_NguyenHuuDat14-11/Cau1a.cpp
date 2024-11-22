///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long a,b,c,ans=LONG_LONG_MAX;
kien()
{
    if(fopen("Cau1a.inp","r"))
    {
        freopen("Cau1a.inp","r",stdin);
        freopen("Cau1a.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c;
    long long x=a,y=b;
    x/=__gcd(a,b);
    y/=__gcd(a,b);
    ans=min(ans,x+y);
    x=b,y=c;
    x/=__gcd(b,c);
    y/=__gcd(b,c);
    ans=min(ans,x+y);
    x=a,y=c;
    x/=__gcd(a,c);
    y/=__gcd(a,c);
    ans=min(ans,x+y);
    cout<<ans;
}