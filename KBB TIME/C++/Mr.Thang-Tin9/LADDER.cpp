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
#define MOD 14062008
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    kien x;
    for (int i = 1; i <= k; i++) {
        cin >> x;
        f[x] = -1;
    }
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (f[i] != -1) {  
            dp[i] = (dp[i - 1] + dp[i-2]);
            dp[i] %= MOD;
        }
    }
    cout << dp[n];
}
