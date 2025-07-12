/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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
kien n, k, m, dem, f[NT + 5], a[1000][1000];
kien maxx, minn, vtr, ans, l, r, dp[1<<16][16];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
    		cin >> a[i][j];
    	}
    }
    maxx = (1 << n) - 1;
 	for (int mask = 0; mask <= maxx; mask++) {
 		for (int j = 0; j < n; j++) {
 			dp[mask][j] = MOD;
 		}
 	}
 	for (int i = 0; i < n; i++) {
 		dp[1 << i][i] = 0;
 	}
 	for (int i = 0; i <= maxx; i++) {
 		for (int u = 0; u < n; u++) {
 			if (dp[i][u] == MOD) continue;
 			for (int v = 0; v < n; v++) {
 				if (i & (1 << v)) continue;
 				int moi = i | (1 << v);
 				dp[moi][v] = min(dp[moi][v], dp[i][u] + a[u][v]);
 			}
 		}
 	}
 	ans = MOD;
 	for (int i = 0; i < n; i++) {
 		ans = min(ans, dp[maxx][i]);
 	}
 	cout << ans;
}
    


