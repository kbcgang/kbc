#include<bits/stdc++.h>
#define int long long 
#define mod 1000000007
using namespace std;
int a,b,c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c;
    cout<<((((a%mod)*(b%mod))%mod)*(c%mod))%mod<<" "<<(a%mod+b%mod+c%mod)%mod;
}