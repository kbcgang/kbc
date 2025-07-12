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
kien q, n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void sangNT() {
    f[1] = f[0] = 1;
    for (int i = 2; i <= sqrt(Million); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= Million; j += i) {
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
    for (int i = 3; i <= Million; i++) {
        dp[i] = dp[i-1];
        if (i % 2 == 1 and f[i] == 0 and f[(i + 1) / 2] == 0) {
            dp[i]++;
        }   
    }
    cin >> q;
    while (q--) {
        cin >> l >> r;
        cout << dp[r] - dp[l -1] << "\n";
    }
}
