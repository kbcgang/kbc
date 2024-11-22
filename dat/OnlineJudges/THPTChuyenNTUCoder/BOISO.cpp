///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a,b,c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>a>>b>>c;
    int k=a/__gcd(a,b)*b;
    int m=k/__gcd(k,c)*c;
    for(int i=m;i<=n;i+=m)
        cout<<i<<" ";
    if(m>n) cout<<-1;
}
