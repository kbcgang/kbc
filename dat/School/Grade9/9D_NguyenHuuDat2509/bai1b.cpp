///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
double ans;
main()
{
    if(fopen("bai1b.inp","r")){
        freopen("bai1b.inp","r",stdin);
        freopen("bai1b.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double s=1.0/(i*i);
        ans+=s;
    }
    cout<<fixed<<setprecision(4)<<ans;
}