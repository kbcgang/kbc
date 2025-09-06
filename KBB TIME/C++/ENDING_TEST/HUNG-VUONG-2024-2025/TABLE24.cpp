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
#define MOD 1000000007
kien n, m, k, a[405][405];
kien f[405][405], vtr, lazy[Million + 5];
kien dp[1000005]; 
 
JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n >> k;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            f[i][j] = a[i][j] + f[i-1][j] + f[i][j-1] - f[i-1][j-1];
        }
    }
    kien ans = 0;
    for (int top = 1; top <= m; ++top) {
        for (int bot = top; bot <= m; ++bot) {
            vtr++;           
            lazy[0] = vtr;
            dp[0] = 1;
            int dem = 0;
            for (int col = 1; col <= n; ++col) {
                kien s = f[bot][col] - f[top-1][col] - f[bot][col-1] + f[top-1][col-1];
                dem = (dem + (int)(s % k) + k) % k;
                if (lazy[dem] != vtr) {
                    lazy[dem] = vtr;
                    dp[dem] = 0;
                }
                ans += dp[dem];
                dp[dem] += 1;
            }
        }
    }
    cout << ans << "\n";    
    return 0;
}

