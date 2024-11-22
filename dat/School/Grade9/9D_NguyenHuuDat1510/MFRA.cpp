///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long a,b;
main()
{
    if(fopen("MFRA.inp","r"))
    {
        freopen("MFRA.inp","r",stdin);
        freopen("MFRA.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    long long m=__gcd(a,b);
    a/=m;
    b/=m;
    if(b<0)
    {
        a=-a;
        b=-b;
    }
    cout<<a<<" "<<b;
}