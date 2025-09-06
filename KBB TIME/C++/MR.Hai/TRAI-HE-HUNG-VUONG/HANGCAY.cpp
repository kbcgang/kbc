/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungint1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n, k, m, dem, a[1000000];
int ans, vtr, l, r, dp[10005][10005];

namespace sub3 {
    int a[Million];
    void run() {
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                k = a[j] - a[i];
                if (k <= 0) continue;
                int dem = 0;
                for (int p = 1; p < i; p++) {
                    if (a[i] - a[p] == k) {
                        dem = (dem + dp[p][i] + 1) % MOD;
                    }
                }
                dp[i][j] = dem;
                ans = (ans + dem) % MOD;
            }
        }
        cout << ans;
    }
};

namespace sub4 {
    pair <int, int> a[Million];
    int s[10005][10005];
    void run() {
        for (int i = 1; i <= n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort (a + 1, a + 1 + n);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                if (a[i].second < a[j].second) {
                    continue;
                }
                int diff = a[i].first - a[j].first;
                if (diff <= 0) continue;
                r = 1;
                l = 1;
                while (l <= r and a[j].first - a[l].first > diff) {
                    l++;
                }
                if (a[l].first == a[j].first - diff) {
                    r = l;
                    while (r <= j and a[j].first - a[r].first >= diff) {
                        r++;
                    }
                    r--;
                    if (r >= l) {
                        vtr = (s[j][r] - s[j][l-1] + MOD) % MOD;
                        dp[j][i] = (vtr + 1) % MOD;
                        ans = (ans + dp[j][i]) % MOD;
                    }
                    s[j][i] = (s[j][i-1] + dp[j][i]) % MOD;
                }
            }
        }
        cout << ans;
    }
};

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    sub4::run();
}
