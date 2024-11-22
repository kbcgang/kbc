
#include<bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a*d;
    c=c*b;
    b=b*d;
    int n=a+c;
    int m=__gcd(n,b);
    cout<<n/m<<"/"<<b/m;

}
