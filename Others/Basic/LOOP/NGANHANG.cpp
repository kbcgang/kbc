#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    while(n<m){
        int a=n/10;
        n+=a;
        ans++;
    }
    cout<<ans;
}
