#include<bits/stdc++.h>
#define int long long
using namespace std;
bool ktnt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,ans=0,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        ans+=ktnt(x);
    }
    cout<<ans;
}
