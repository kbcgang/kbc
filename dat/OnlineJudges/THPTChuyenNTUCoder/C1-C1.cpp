#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,k,x,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        if(x%k==0)  ans++;
    }
    cout<<ans*(ans-1)/2;
}