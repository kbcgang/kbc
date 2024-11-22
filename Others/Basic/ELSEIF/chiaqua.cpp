#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
main()
{
    if(fopen("chiaqua.inp","r")){
        freopen("chiaqua.inp","r",stdin);
        freopen("chiaqua.out","w",stdout);
    }
    cin>>n;
    if(n%2==0)
        cout<<n/2<<" "<<n/2;
    else cout<<n/2<<" "<<n/2+1;
}