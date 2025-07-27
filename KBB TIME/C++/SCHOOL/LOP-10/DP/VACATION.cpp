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
kien maxx, minn, vtr, ans, l, r, dp[1000000][3];

struct KBB {
    kien beach, peak, home;
};
KBB a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].beach >> a[i].peak >> a[i].home;
    }
    for (int i = 1; i <= n; i++) {
        dp[i][1] = max({dp[i][1], dp[i-1][2] + a[i].beach, dp[i-1][3] + a[i].beach});
        dp[i][2] = max({dp[i][2], dp[i-1][1] + a[i].peak, dp[i-1][3] + a[i].peak});
        dp[i][3] = max({dp[i][3], dp[i-1][1] + a[i].home, dp[i-1][2] + a[i].home});
    }
    cout << max({dp[n][1], dp[n][2], dp[n][3]});
    
}
