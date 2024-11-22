#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,p,t;
main()
{
    if(fopen("PowerOfPrime.inp","r")){
        freopen("PowerOfPrime.inp","r",stdin);
        freopen("PowerOfPrime.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        int ans=0;
        cin>>n>>p;
        while(n>0){
            ans+=n/p;
            n/=p;
        }
        cout<<ans<<"\n";
    }

}