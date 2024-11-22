#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int a,b;
main()
{
    if(fopen("CGAME.INP","r"))
    {
        freopen("CGAME.INP","r",stdin);
        freopen("CGAME.OUT","w",stdout);
    }
    cin>>a>>b;
    if(a>b) cout<<1;
    else cout<<0;

}
