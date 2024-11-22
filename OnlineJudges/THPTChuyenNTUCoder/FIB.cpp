#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int f[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    f[1]=f[2]=1;
    for(int i=3;i<=n;i++)
    {
        f[i]=(f[i-1]%mod+f[i-2]%mod)%mod;
    }
    cout<<f[n]%mod;
}
