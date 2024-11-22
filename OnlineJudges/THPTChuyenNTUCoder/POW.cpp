///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a,n,ans=1,t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>n;
    if(a==1){
        cout<<1+n;
        return 0;
    }
    n++;
    t=a%mod;
    // ans=check(a,n);
    while(n>0)
    {
        if(n%2==1)
        {
            ans=((ans%mod)*(t%mod))%mod;
        }
        n/=2;
        t=((t%mod)*(t%mod))%mod;
    }
    int m=pow(a-1,-1);
    cout<<(ans-1)*m;
}
