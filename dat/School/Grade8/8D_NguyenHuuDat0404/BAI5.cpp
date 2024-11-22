#include<bits/stdc++.h>
#define int long long 
#define mod 1000000007
using namespace std;
int n,a[1000005],p,k,s,ans;
main()
{
    if(fopen("BAI5.inp","r")){
        freopen("BAI5.inp","r",stdin);
        freopen("BAI5.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k>>p;
    int vitri=p%n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s=(s%mod+a[i]%mod)%mod;
    }
    int solanlap=((k%mod)/(n%mod))%mod;
    ans+=(solanlap*s)%mod;
    int thua=k%n;
    int i=vitri;
    while(thua--){
        if(a[i]==0)
            i-=n;
        ans+=a[i];
        i++;
    }
    cout<<ans;
}