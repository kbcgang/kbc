///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n,a,b;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("CAU1.inp","r"))
    {
        freopen("CAU1.inp","r",stdin);
        freopen("CAU1.out","w",stdout);
    }
    cin>>n>>a>>b;
    cout<<n/a+n/b-n/(a/__gcd(a,b)*b);
}