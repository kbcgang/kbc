#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n;
main()
{
    if(fopen("TONG.INP","r"))
    {
        freopen("TONG.INP","r",stdin);
        freopen("TONG.OUT","w",stdout);
    }
    cin>>n;
    if(n%2==0)
        cout<<n/2;
    else cout<<(n-1)/2-n;
}
