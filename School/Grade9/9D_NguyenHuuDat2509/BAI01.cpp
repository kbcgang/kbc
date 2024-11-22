///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long n,a,b,c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("BAI01.inp","r")){
        freopen("BAI01.inp","r",stdin);
        freopen("BAI01.out","w",stdout);
    }
    cin>>n>>a>>b>>c;
    long ab=a/__gcd(a,b)*b;
    long ac=a/__gcd(a,c)*c;
    long bc=b/__gcd(b,c)*c;
    long abc=ab/__gcd(ab,c)*c;
    cout<<n/ab+n/ac+n/bc-3*(n/abc);
}