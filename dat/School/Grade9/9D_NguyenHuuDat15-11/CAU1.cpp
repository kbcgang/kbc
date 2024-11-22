/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000000
using namespace std;
long long n;
long long s,ans;
kien()
{
    if (fopen("CAU1.inp", "r"))
    {
        freopen("CAU1.inp", "r", stdin);
        freopen("CAU1.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ans=n;
    // for (long long i = 1; i <= n; i++)
    //     s = (s + (i * (i + 1)) % mod) % mod;
    if(n%3==0){
        ans/=3;
        ans=(ans*(n+1))%mod;
        ans=(ans*(n+2))%mod;
    }
    else if((n+1)%3==0)
    {
        ans=((ans*(n+1))/3)%mod;
        ans=(ans*(n+2))%mod;
    }
    else if((n+2)%3==0)
    {
        ans=((ans*(n+2))/3)%mod;
        ans=(ans*(n+1))%mod;
    }
    cout<<ans;
    // cout << s;
}