#include<bits/stdc++.h>
using namespace std;
int n,a[100005],s[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        int t=a[i-1]+a[i];
        s[i]=max({s[i-3]+t,s[i-2]+a[i],s[i-1]});
    }
    cout<<s[n];
}
