#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t,n,x;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        int ans=0;
        while(n--)
        {
            cin>>x;
            ans+=x;
        }
        cout<<ans<<"\n";
    }
}