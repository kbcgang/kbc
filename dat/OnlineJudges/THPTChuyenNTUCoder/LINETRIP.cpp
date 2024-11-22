#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[105];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,ans=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ans+=abs(a[n-1]);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1]){
            ans+=abs(m-a[i]);
            m=a[i];
        }
    }
    cout<<ans;
}
