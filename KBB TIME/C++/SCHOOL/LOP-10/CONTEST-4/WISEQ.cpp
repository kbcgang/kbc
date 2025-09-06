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
kien n, f[Million + 5], k, m, dem, trong[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void sangNT() {
    for (int i = 2; i <= sqrt(Million); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= Million; j += i) {
                f[j] = 1;
            }
        } 
    }
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        trong[i] = MOD;
    }
    if (a[1] <= k) {
        dp[1] = 1;
        trong[1] = a[1];
    }
    else {
        trong[1] = 0;
        dp[1] = 0;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] <= k) {
            dp[i] = 1;
            trong[i] = a[i];
        }
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j] and trong[j] + a[i] <= k) {
                if (dp[i] <= dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    trong[i] = min(trong[i], trong[j] + a[i]);
                }
            }
        }
    }
    cout << *max_element(dp + 1, dp + 1 + n);
}
     