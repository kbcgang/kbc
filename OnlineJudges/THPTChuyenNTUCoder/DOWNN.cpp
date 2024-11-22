#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[105];
main()
{
    if(fopen("DOWNN.inp","r"))
    {
        freopen("DOWNN.inp","r",stdin);
        freopen("DOWNN.out","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
}
