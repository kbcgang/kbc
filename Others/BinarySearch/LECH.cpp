#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],m=INT_MAX;
main()
{
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
        m=min(abs(a[i]-a[i+1]),m);
    cout<<m;

}
