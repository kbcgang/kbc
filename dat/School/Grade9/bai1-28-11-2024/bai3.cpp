#include<bits/stdc++.h>
using namespace std;
int n,k,x,ans;
map<int,int>dem;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans+=dem[k-x];
        dem[x]++;
    }
    cout<<ans;
}