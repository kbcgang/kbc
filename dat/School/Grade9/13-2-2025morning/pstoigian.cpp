#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b;cin>>a>>b;
    ll x=__gcd(a,b);
    cout<<a/x<<"/"<<b/x;
}