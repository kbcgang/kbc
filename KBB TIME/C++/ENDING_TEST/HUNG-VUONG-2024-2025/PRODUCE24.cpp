/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
int n, m, K;
kien c[100+5];
bool ktr[100+5][100+5];
static kien dp[30+1][100+5];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> K;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
        for (int j = 1; j <= n; j++) {
            ktr[i][j] = false;
        }
    }
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        ktr[u][v] = true;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) if (ktr[i][k]) {
            for (int j = 1; j <= n; j++) {
                if (ktr[k][j]) ktr[i][j] = true;
            }
        }
    }
    for (int u = 1; u <= n; u++) {
        dp[1][u] = c[u];
    }
    for (int t = 2; t <= K; t++) {
        for (int u = 1; u <= n; u++) {
            dp[t][u] = 0;
            for (int v = 1; v <= n; v++) {
                if (v != u && ktr[v][u] && dp[t-1][v] > 0) {
                    dp[t][u] = max(dp[t][u], dp[t-1][v] + c[u]);
                }
            }
        }
    }
    kien ans = 0;
    for (int t = 1; t <= K; t++) {
        for (int u = 1; u <= n; u++) {
            ans = max(ans, dp[t][u]);
        }
    }

    cout << ans << "\n";
    return 0;
}
