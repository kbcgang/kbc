#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a,b;
main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>a>>b;
    int x=a/__gcd(a,b)*b;
    for(int i=x;i<=a*b;i+=x)cout<<i<<" ";
}