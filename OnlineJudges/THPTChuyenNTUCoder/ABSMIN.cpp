#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[200005],ans=INT_MAX;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
        ans=min(ans,a[i+1]-a[i]);
    printf("%i",ans);
}