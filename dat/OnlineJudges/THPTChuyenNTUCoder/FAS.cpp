#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],ans[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    ans[2]=abs(a[1]-a[2]);
    for(int i=3;i<=n;i++)
        ans[i]=min(ans[i-1]+abs(a[i]-a[i-1]),ans[i-2]+abs(a[i]-a[i-2]));
    cout<<ans[n];
}
