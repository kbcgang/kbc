///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int GCD(int a,int b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}
int u,v,x,y,t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>u>>v>>x>>y;
        int n=__gcd(u,v);
        int m=__gcd(x,y);
        if(n==m)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
}
