#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,a,b,c;
main()
{
    if(fopen("SUM3.INP","r"))
    {
        freopen("SUM3.INP","r",stdin);
        freopen("SUM3.OUT","w",stdout);
    }
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        cout<<a+b+c<<"\n";
    }
}
