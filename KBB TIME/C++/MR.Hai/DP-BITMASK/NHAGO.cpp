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
kien n, k, m, c, dem, s[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[100000][1 << 6];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien p;
    cin >> n >> m >> p >> c;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }
    minn = LLONG_MIN;
    for (int i = 0; i <= n; i++) {
        for (int mask = 0; mask < (1 << m); mask++) {
            dp[i][mask] = minn;
        }
    }
    dp[0][0] = 0;
    for (int i = 0; i <= n; i++) {
        for (int mask = 0; mask < (1 << m); mask++) {
            if (dp[i][mask] == minn) continue;
            if (i + 1 <= n) {
                dp[i + 1][mask] = max(dp[i + 1][mask], dp[i][mask]);
            }
            for (int j = 0; j < m; j++) {
                int need = s[j];
                if (i + need <= n) {
                    l = i + 1; 
                    r = i + need;
                    kien vtr = p - c * (a[r] - a[l]) * (a[r] - a[l]);
                    int mask1 = mask | (1 << j);
                    dp[r][mask1] = max(dp[r][mask1], dp[i][mask] + vtr);
                }
            }
        }
    }
    ans = LLONG_MIN;
    for (int i = 0; i <= n; i++) {
        ans = max(ans, dp[i][(1 << m) - 1]);
    }
    cout << ans;
}
