#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[1000005],Ma[1000005],Mi[1000005],ans=INT_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    Ma[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        Ma[i]=max(Ma[i+1],a[i]);
    Mi[0]=a[0];
    for(int i=1;i<n;i++)
        Mi[i]=min(Mi[i-1],a[i]);
    for(int i=0;i<n-1;i++)
        ans=max(Ma[i+1]-Mi[i],ans);
    cout<<ans;
}