#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[1000005],Max[1000005],Min[1000005],ans=INT_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    Max[0]=a[0];
    for(int i=1;i<n-1;i++)
        Max[i]=max(Max[i-1],a[i]);
    Min[n-1]=a[n-1];
    for(int i=n-2;i>=1;i--)
        Min[i]=min(Min[i+1],a[i]);
    for(int i=1;i<n-2;i++)
        ans=max(Max[i-1]+a[i]-Min[i+1],ans);
    cout<<ans;
}