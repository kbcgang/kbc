#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll s[100005];
int t,n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(ll i=1;i<=1e5;i++)
        s[i]=s[i-1]+i*i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<s[n]<<"\n";
    }
}