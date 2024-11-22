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
    int cd=c/__gcd(c,d)*d;
    cout<<b/cd-(a-1)/cd;
}