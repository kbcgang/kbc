/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int a[100005], n , m;
kien f[105], dp[105];

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int j = 1; j <= m; ++j) {
        f[j] = 0;
    }
    if (a[1] == 0) {
        for (int j = 1; j <= m; ++j) {
            f[j] = 1;
        }
    } else {
        if (a[1] < 1 or a[1] > m) {
            cout << 0 << '\n';
            return 0;
        }
        f[a[1]] = 1;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            dp[j] = 0;
        }
        if (a[i] == 0) {
            for (int val = 1; val <= m; ++val) {
                if (val - 1 >= 1) {
                    dp[val] = (dp[val] + f[val-1]) % MOD;
                }
                dp[val] = (dp[val] + f[val]) % MOD;
                if (val + 1 <= m) {
                    dp[val] = (dp[val] + f[val+1]) % MOD;
                }
            }
        } 
        else {
            int val = a[i];
            if (val < 1 or val > m) {
                cout << 0 << '\n';
                return 0;
            }
            if (val - 1 >= 1) {
                dp[val] = (dp[val] + f[val-1]) % MOD;
            }
            dp[val] = (dp[val] + f[val]) % MOD;
            if (val + 1 <= m) {
                dp[val] = (dp[val] + f[val+1]) % MOD;
            }
        }
        for (int j = 1; j <= m; ++j) {
            f[j] = dp[j];
        }
    }
    kien ans = 0;
    if (a[n] == 0) {
        for (int j = 1; j <= m; ++j) {
            ans = (ans + f[j]) % MOD;
        }
    } else {
        ans = f[a[n]] % MOD;
    }
    cout << ans << '\n';
}
