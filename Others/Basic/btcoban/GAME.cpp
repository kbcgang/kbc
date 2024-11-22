#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    int a;
    // if(n%2==1){
    //     a=(n-1)*m;
    //     if(a%4!=0) ans=a/4+1;
    //     else ans=a/4;
    //     if(m%2!=0) ans+=m/2+1;
    //     else ans+=m/2;
    // }
    // else if(m%2==1){
    //     a=n*(m-1);
    //     if(a%4!=0) ans=a/4+1;
    //     else ans=a/4;
    //     if(n%2!=0) ans+=n/2+1;
    //     else ans+=n/2;
    // }
    // else{
    //     a=n*m;
    //     ans=a/4;
    // }
    if(n%2==1&&m%2==1)
        cout<<(n+1)*(m+1)/4;
    else if(n%2==1)
        cout<<((n+1)*m)/4;
    else if(m%2==1)
        cout<<(n*(m+1))/4;
    else
        cout<<n*m/4;
}