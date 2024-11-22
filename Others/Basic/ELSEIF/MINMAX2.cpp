#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b;
main()
{
    if(fopen("MINMAX2.inp","r")){
        freopen("MINMAX2.inp","r",stdin);
        freopen("MINMAX2.out","w",stdout);
    }
    cin>>a>>b;
    if(a>b) cout<<b<<" "<<a;
    else cout<<a<<" "<<b;
}