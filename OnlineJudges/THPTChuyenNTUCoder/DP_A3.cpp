#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000000],ans=INT_MIN,Max[1000000],Min[1000000];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    Max[0]=a[0];
    for(int i=1;i<n-2;i++)
        Max[i]=max(Max[i-1],a[i]);
    Min[n-1]=a[n-1];
    for(int i=n-2;i>=2;i--)
        Min[i]=min(Min[i+1],a[i]);
    for(int i=1;i<n-1;i++)
        ans=max(ans,abs(Max[i-1]+a[i]-Min[i+1]));
    cout<<ans;
}