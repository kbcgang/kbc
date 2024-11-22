#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int fib[1000005];
void make_fib()
{
    fib[1]=1;
    fib[2]=1;
    for(int i=3;i<=1e6;i++)
        fib[i]=(fib[i-2]%mod+fib[i-1]%mod)%mod;
}
int t,n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_fib();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<fib[n]<<"\n";
    }
}
