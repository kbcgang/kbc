#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b,c,d;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c>>d;
    double m=1.0*a/b;
    double n=1.0*c/d;
    if(m<n) cout<<1;
    else cout<<0;
}