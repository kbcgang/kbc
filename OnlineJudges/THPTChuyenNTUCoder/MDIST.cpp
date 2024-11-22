#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x[105],y[105],ans=INT_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            ans=max(ans,abs(x[i]-x[j])+abs(y[i]-y[j]));
    cout<<ans;

}
