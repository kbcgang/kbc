#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans=INT_MIN,n,l,a[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>l>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ans=max(a[0],l-a[n-1]);
    for(int i=0;i<n-1;i++)
    {
        ans=max(ans,abs(a[i]-a[i+1])/2);
    }
    cout<<ans;
}
