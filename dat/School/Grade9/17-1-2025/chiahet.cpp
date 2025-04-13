#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,x,y;
main()
{
    cin>>a>>b>>x>>y;
    ll xy=x/__gcd(x,y)*y;
    cout<<(b/x-(a-1)/x)+(b/y-(a-1)/y)-(b/xy-(a-1)/xy);
}