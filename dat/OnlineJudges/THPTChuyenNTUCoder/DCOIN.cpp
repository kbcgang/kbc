#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[105],ans,dem[101];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        dem[a[i]]++;
        ans=max(ans,dem[a[i]]);
    }
    cout<<ans;
}
