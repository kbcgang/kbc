#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[200005],ans=INT_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ans=max(abs(a[n-1]+a[n-2]),abs(a[0]+a[1]));
    printf("%i",ans);
}