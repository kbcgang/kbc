#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[3000005],k,s[3000005],t=INT_MIN;
main()
{
    vip;
    if(fopen("bai6.inp","r"))
    {
        freopen("bai6.inp","r",stdin);
        freopen("bai6.out","w",stdout);
    }
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    for(int i=0;i<=n-k;i++)
        t=max(t,s[i+k-1]-s[i-1]);
    cout<<t;
}
