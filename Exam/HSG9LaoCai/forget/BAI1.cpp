#include<bits/stdc++.h>
#define int long long
using namespace std;
int t=9999,n,s[1000005];
main()
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=1;i<=1e6;i++)
        s[i]=s[i-1]+i*(i+2);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<s[n]<<"\n";
    }
}
