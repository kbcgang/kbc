///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
unsigned long long n;
unsigned long long f1,f2=1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(f1+f2<=n)
    {
        unsigned long long f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    cout<<f2;
}
