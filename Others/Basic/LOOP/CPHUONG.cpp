#include<bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,ans=0;
    cin>>n;
    int i=1;
    while(i*i<=n){
        ans++;
        i++;
    }
    i=1;
    cout<<ans<<"\n";
    while(i*i<=n){
        cout<<i*i<<" ";
        i++;
    }

}
