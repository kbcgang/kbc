#include<bits/stdc++.h>
using namespace std;
int n,y[30005],ans[30005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>y[i];
    ans[1]=abs(y[1]-y[0]);
    for(int i=2;i<n;i++)
        ans[i]=min(ans[i-1]+abs(y[i]-y[i-1]),ans[i-2]+3*abs(y[i]-y[i-2]));
    cout<<ans[n-1];
}
