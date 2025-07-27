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
kien n, k, mi, ma, dem, f[Million + 5];
kien x , y, vtr, ans, l, r, s[1000000];
pair <kien , kien> a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].second >> a[i].first;
    }
    sort (a + 1, a + 1 + n);
    int l = 1, r = 0;
    while (r <= n and l <= n) {
        if (a[r + 1].first - a[l].first <= 2 * k) {
            r++;
            dem += a[r].second;
            ans = max(ans, dem);
        }
        else {
            dem = dem - a[l].second;
            l++;
        }
    }
    cout << ans;
}
