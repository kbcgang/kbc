#include<bits/stdc++.h>
#define int long long 
using namespace std;
int l,r,k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>l>>r>>k;
    int ans=0;
    for(int i=l;i<=r;i++)
        if(i%k==0)
            ans++;
    cout<<ans;
}