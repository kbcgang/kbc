///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long double ans=1;
long n,x;
long long s=1;
main()
{
    if(fopen("Cau1b.inp","r")){
        freopen("Cau1b.inp","r",stdin);
        freopen("Cau1b.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;
    long long y=x*x;
    for(int i=1;i<=2*n+1;i+=2)
    {
        double m=1.0*x/s;
        ans=1.0*(ans+m);
        s*=(i+2)*(i+1);
        x*=y;
    }
    cout<<fixed<<setprecision(3)<<ans;
}