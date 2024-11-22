#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,k,a[105],ans=0;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            if(a[i]/__gcd(a[i],a[j])*a[j]<=k)
                ans++;
    }
    cout<<ans;
}