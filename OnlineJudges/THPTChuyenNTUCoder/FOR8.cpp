#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,u[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(0);
    u[1]=1;
    u[2]=1;
    cin>>n;
    for(int i=3;i<=n;i++){
        u[i]=((3*(u[i-1]%mod))-(u[i-2]%mod))%mod;
    }
    cout<<u[n];
}
