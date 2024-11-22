#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,ans1;
main()
{
    if(fopen("SOCHAN.inp","r")){
        freopen("SOCHAN.inp","r",stdin);
        freopen("SOCHAN.out","w",stdout);
    }
    cin>>n;
    cout<<n/6<<"\n";
    for(int i=6;i<=n;i+=6)
        cout<<i<<" ";
}