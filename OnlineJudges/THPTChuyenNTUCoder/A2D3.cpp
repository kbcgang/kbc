#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[105][105],ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++){
        int t=0;
        for(int j=0;j<n;j++)
            t+=a[i][j];
        ans=max(ans,t);
    }
    cout<<ans;
}
