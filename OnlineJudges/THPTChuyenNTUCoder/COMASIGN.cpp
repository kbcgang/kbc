#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, x[10000], t, ans;
map<int,int> dem;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        x[i]++;
        dem[x[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        if(dem[t]>0){
            ans++;
            dem[t]--;
        }
    }
    cout<<ans;
}