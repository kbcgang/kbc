#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b,c,d,e;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c>>d>>e;
    if(a>b) swap(a,b);
    if(a>c) swap(a,c);
    if(a>d) swap(a,d);
    if(a>e) swap(a,e);
    if(b>e) swap(b,e);
    if(c>e) swap(c,e);
    if(d>e) swap(d,e);
    cout<<a+b+c+d<<" "<<b+c+d+e;
}