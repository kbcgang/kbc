///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 20232024
using namespace std;
long n;
long long ans=1;
long long cool(long long n)
{
    if(n==0)
        return 1;
    long long t=3;
    while(n>1)
    {
        if(n%2==1)
        {
            t=(t*t*3)%mod; ///t^(n/2)*t^(n/2)*3
        }
        else t=(t*t)%mod;
        n/=2;
    }
    return t;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("CAU3.inp","r"))
    {
        freopen("CAU3.inp","r",stdin);
        freopen("CAU3.out","w",stdout);
    }
    cin>>n;
    long m=n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ans=(ans*(cool(1ll*i)+i))%mod;
            while(n%i==0)
                n/=i;
        }
    }
    if(m==n)
    {
        cout<<1;
        return 0;
    }
    if(n>1)
    {
        ans=(ans*(cool(n)+n))%mod;
    }
    cout<<ans;
    // long long m=pow(3,n);
    // cout<<cool(n)<<"\n"<<m;
}