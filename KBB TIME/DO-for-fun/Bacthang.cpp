///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n*m; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n*m);
    r = n*m;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> f[i];
    }
    sort (f + 1, f + 1 + k);
    int j = 1, i = 1;
    while (j <= r)
    {
        if (f[i] <= a[j])
        {
            ans++;
            i++;
            j++;
        } 
        else
        {
            j++;
        }
    }
    cout << ans;

}