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
kien n, k, m, dem, a[16][16];
kien maxx, minn, vtr, ans, l, r, dp[16][1 << 16];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n ; j++) {
    		cin >> a[i][j];
    	}
    }
    for (int i = 0; i < n; i++) {
    	for (int mask = 0; mask < (1 << n); mask++) {
    		dp[i][mask] = LLONG_MAX;
    	}
    }
    for (int i = 0; i < n; i++) {
    	dp[i][1 << i] = 0;
    }
    for (int mask = 0; mask < (1 << n); mask++) {
    	for (int i = 0; i < n; i++) {
    		if ((mask >> i) & 1) {
    			for (int last = 0; last < n; last++) {
    				if (!((mask >> last) & 1)) {
    					int mask1 = mask | (1 << last);
    					dp[last][mask1] = min(dp[last][mask1], dp[i][mask] + a[i][last]);
    				}
    			}
    		}
    	}
    }
    ans += LLONG_MAX;
    for (int i = 0; i < n; i++) {
    	ans = min(ans, dp[i][(1 << n) - 1]);
    }
    cout << ans;
}
    