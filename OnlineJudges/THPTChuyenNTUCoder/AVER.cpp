#include<bits/stdc++.h>
#define int long long
#define mod 1000000000
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
double a,b;
main()
{
    if(fopen("AVER.INP","r"))
    {
        freopen("AVER.INP","r",stdin);
        freopen("AVER.OUT","w",stdout);
    }
    cin>>a>>b;
    double ans=a/2.0+b/2.0;
    cout<<(int)ans;
}
