/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million + 5];
kien maxx, minn, vtr[Million], ans, l, r, dp[1000000];
pair <kien, kien> a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].first;
            maxx = max(maxx, a[i].first);
        }
        for (int i = 1;i <= n; i++)
        {
            cin >> a[i].second;
            if (a[i].second != -1)
            {
                dem = 1;
                vtr[i] = a[i].first + a[i].second;
                if (vtr[i] != vtr[i-1])
                {
                    cout << 0;
                    r = 1;
                    break;
                }
            }
        }
        
    }
}
