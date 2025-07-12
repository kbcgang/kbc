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
kien n, k, m, dem, pp[(1 << 20) + 5], a[25][25];
kien maxx, minn, vtr, ans, l, r, dp[(1 << 20) + 5];

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
    for (int mask = 0; mask < (1 << n); ++mask) {
        dp[mask] = -1;   
        pp[mask] = 0;
    }
    dp[0] = 0;
    pp[0] = 1;
    for (int mask = 0; mask < (1 << n); mask++) {
    	dem = 0;
    	for (int i = 0; i < n; i++) {
    		if ((mask >> i) & 1) {
    			dem++;
    		}
    	}
    	for (int i = 0; i < n; i++) {
    		if (!((mask >> i) & 1)) {
    			kien mask1 = mask | (1 << i);
    			vtr = dp[mask] + a[dem][i];
    			if (vtr > dp[mask1]) {
    				dp[mask1] = vtr;
    				pp[mask1] = pp[mask];
    			}
    			else {
    				if (vtr == dp[mask1]) {
    					pp[mask1] += pp[mask];
    				}
    			}
    		}
    	}
    }
    cout << dp[(1 << n) - 1] << " " << pp[(1 << n) - 1];
}
    