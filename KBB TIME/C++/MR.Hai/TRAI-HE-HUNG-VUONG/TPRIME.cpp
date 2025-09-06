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
kien n, k, m, dem, f[Million + 5], a[1000000], pre[Million];
kien maxx[Million], minn, vtr, ans, l, r, dp[1000000];

void sangNT() {
    for (int i = 2; i <= sqrt(Million); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= Million; j+= i) {
                f[j] = 1;
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    dp[1] = 1;
    dp[2] = 0;
    maxx[Million] = 1000003;
    for (int i = Million - 1; i >= 3; i--) {
        if (f[i] == 0) {
            maxx[i] = i;
        }
        else {
            maxx[i] = maxx[i+1];
        }
    }
    minn = 2;
    for (int i = 3; i <= Million; i++) {
        if (f[i] == 0) {
            dp[i] = 0;
            minn = i;
        }
        else {
            dp[i] = min(i - minn, maxx[i] - i);
        }
    }
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i-1] + dp[a[i]];
        cout << dp[a[i]];
    }
    ans = INT_MAX;
    for (int i = k; i <= n; i++) {
        ans = min(ans, pre[i] - pre[i - k]);
    }
    cout << ans;
}
