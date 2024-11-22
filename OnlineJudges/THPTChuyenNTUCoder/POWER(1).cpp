///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,ans=1,t=2;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n>0)
    {
        if(n%2==1)
            ans=(ans%mod*t%mod)%mod;
        t=(t%mod*t%mod)%mod;
        n/=2;
    }
    cout<<ans%mod;
}