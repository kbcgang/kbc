#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,x,dem;
main()
{
    if(fopen("A2-A2.INP","r"))
    {
        freopen("A2-A2.INP","r",stdin);
        freopen("A2-A2.OUT","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if((x*x*x)%21==0)
            dem++;
    }
    cout<<dem;
}
