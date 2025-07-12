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
kien maxx, minn, vtr, ans, l, r, dp[1000000];
pair <kien, kien> a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].second >> a[i].first;
    }
    sort (a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        if (m > 0) {
            ans += min(m, a[i].second) * a[i].first;
            m -= min(m, a[i].second);
            a[i].second = 0;
        }
        else {
            break;
        }
    }
    cout << ans;
}
