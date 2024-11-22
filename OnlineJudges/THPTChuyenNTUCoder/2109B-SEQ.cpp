#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[1000005],m1[1000005],m2[1000005],ans=LLONG_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m1[0]=a[0];
    for(int i=1;i<n;i++)
        m1[i]=max(a[i],m1[i-1]);
    m2[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        m2[i]=max(m2[i+1],a[i]);
    for(int i=1;i<n-1;i++)
        ans=max(ans,m1[i-1]-a[i]+m2[i+1]);
    cout<<ans;
}