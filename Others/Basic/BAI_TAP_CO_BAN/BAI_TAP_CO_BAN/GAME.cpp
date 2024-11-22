///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,m;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    if(n%2==1) n++;
    if(m%2==1) m++;
    cout<<m*n/4;
//    if(n%2!=0&&m%2!=0)
//        cout<<(n+1)*(m+1)/4;
//    else if(n%2!=0)
//        cout<<(n+1)*m/4;
//    else if(m%2!=0)
//        cout<<n*(m+1)/4;
//    else cout<<n*m/4;
}
