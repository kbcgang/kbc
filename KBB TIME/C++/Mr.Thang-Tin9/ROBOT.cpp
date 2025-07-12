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
kien n, k, m, dem, a[100000], b[1000][1000];
kien maxx, minn, vtr, ans, l, r, dp[20][1 << 20];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 	cin >> n;
 	for (int i = 0; i < n; i++) {
 		cin >> a[i];
 	}   
 	for (int i = 0; i < n; i++) {
 		for (int j = 0; j < n; j++) {
 			cin >> b[i][j];
 		}
 	}
 	for (int i = 0; i < n; i++) {
 		dp[i][1 << i] = a[i];
 	}
 	for (int mask = 1; mask < (1 << n); mask++) {
 		for (int last = 0; last < n; last++) {
 			if (!((mask >> last) & 1)) continue;
 			for (int j = 0; j < n; j++) {
 				if ((mask >> j) & 1) continue;
 				vtr = a[j] - b[last][j];
 				if (vtr < 0) vtr = 0;
 				int next = mask | (1 << j);
 				if (dp[j][next] == 0 || dp[j][next] > dp[last][mask] + vtr) {
                    dp[j][next] = dp[last][mask] + vtr;
                }
 			}
  		}
 	}
 	ans = MOD;
 	for (int i = 0; i < n; i++) {
 		ans = min(ans, dp[i][(1 << n) - 1]);
 	}
 	cout << ans;
}
    