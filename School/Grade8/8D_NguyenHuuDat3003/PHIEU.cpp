#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,dem=0,a[10000005];
main()
{
    vip;
    if(fopen("PHIEU.INP","r"))
    {
        freopen("PHIEU.INP","r",stdin);
        freopen("PHIEU.OUT","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
            dem++;
    }
    cout<<dem;
}
