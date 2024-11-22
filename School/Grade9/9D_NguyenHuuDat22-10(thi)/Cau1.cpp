///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000000
using namespace std;
long long n;
void sub1()
{
    long long s=0;
    for(int i=1;i<=n;i++)
        s=(s%mod+(i*(i+1))%mod)%mod;
    cout<<s;
}
void sub2() ///didn't know how to do
{
    cout<<n*(n+1)*(n+2)/3;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n<=1e6) sub1();
    else sub2();
}