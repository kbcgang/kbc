#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c,n;
main()
{   
    freopen("BAI01.INP","r",stdin);
    freopen("BAI01.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>a>>b>>c;
    int bcnnab=a/__gcd(a,b)*b;
    int bcnnac=a/__gcd(a,c)*c;
    int bcnnbc=b/__gcd(b,c)*c;
    int bcnnabc=bcnnab/__gcd(bcnnab,c)*c;
    cout<<n/bcnnab+n/bcnnac+n/bcnnbc-n/bcnnabc;
}
