#include<bits/stdc++.h>
#define int long long 
using namespace std;
int x,n;
main()
{
    if(fopen("luythua.inp","r")){
        freopen("luythua.inp","r",stdin);
        freopen("luythua.out","w",stdout);
    }
    cin>>x>>n;
    cout<<pow(x,n);
}