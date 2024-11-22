#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int a,b;
main()
{
    if(fopen("CHANLE.INP","r"))
    {
        freopen("CHANLE.INP","r",stdin);
        freopen("CHANLE.OUT","w",stdout);
    }
    cin>>a>>b;
    if(a%2==b%2)
        if(a%2==1)
            cout<<-(b+a)/2;
        else cout<<(b+a)/2;
    else
        if(b%2==0)cout<<(b-a+1)/2;
        else cout<<-(b-a+1)/2;
}
