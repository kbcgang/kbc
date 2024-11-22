///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("calc.inp","r"))
    {
        freopen("calc.inp","r",stdin);
        freopen("calc.out","w",stdout);
    }
    cin>>n;
    if(n&1)
        cout<<n/2-n;
    else cout<<n/2;
}