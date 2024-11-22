///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n,a,b,c;
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>a>>b>>c;
    long long ab=a/__gcd(a,b)*b;
    long long ac=a/__gcd(a,c)*c;
    long long bc=b/__gcd(b,c)*c;
    long long abc=ab/__gcd(ab,c)*c;
    cout<<n/ab+n/ac+n/bc+3*(n/abc);
}