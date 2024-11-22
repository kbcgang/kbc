///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int p,n,k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>p>>n>>k;
    int m=n*(n+1)/2;
    if(m*k>p) cout<<"NO\n"<<m*k-p;
    else cout<<"YES";
}