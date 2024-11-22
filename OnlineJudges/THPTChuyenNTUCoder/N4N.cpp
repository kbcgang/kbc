#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,ans,s=1;
int luythuanhanh(int n, int i)
{
    int ans=1;
    while(i>0){
        if(i%2==1) ans=(ans*n)%mod;
        n=(n*n)%mod;
        i/=2;
    }
    return ans;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        s=luythuanhanh(i,i);
        ans=(ans%mod+s%mod)%mod;
    }
    cout<<ans;
}
