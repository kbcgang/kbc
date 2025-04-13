#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<string, int> dem;
string s;
main()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (cin >> s)
    {
        dem[s]++;
    }
    dem[s]--;
    int ans=0;
    for(auto i:dem) ans+=i.second;
    cout<<ans<<" "<<dem[s];
}