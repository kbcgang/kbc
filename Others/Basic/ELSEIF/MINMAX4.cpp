#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b,c,d;
main()
{
    if(fopen("MINMAX4.inp","r")){
        freopen("MINMAX4.inp","r",stdin);
        freopen("MINMAX4.out","w",stdout);
    }
    cin>>a>>b>>c>>d;
    if(b>a) swap(a,b);
    if(c>a) swap(a,c);
    if(d>a) swap(a,d);
    if(b>c) swap(b,c);
    if(b>d) swap(b,d);
    cout<<b<<" "<<a;
}