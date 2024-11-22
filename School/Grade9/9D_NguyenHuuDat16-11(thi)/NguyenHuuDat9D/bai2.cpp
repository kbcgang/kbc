#include<bits/stdc++.h>
using namespace std;
long long x,y,n;
main()
{
    if(fopen("bai2.inp","r"))
    {
        freopen("bai2.inp","r",stdin);
        freopen("bai2.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x>>y>>n;
    if(n%2==0)
        cout<<max(x,y)/min(x,y);
    else
        cout<<max(2*x,y)/min(2*x,y);
}
