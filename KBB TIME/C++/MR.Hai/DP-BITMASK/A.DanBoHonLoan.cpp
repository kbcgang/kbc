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
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[(1 << 16) + 5][20];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        dp[1 << i][i] = 1;
    }
    for (int mask = 0; mask < (1 << n); mask++) {
    	for (int i = 0; i < n; i++) {
    		if (dp[mask][i] > 0) {
    			for (int next = 0; next < n; next++) {
    				if (!((mask >> next) & 1)) {
    					int gtr = a[next] - a[i];
    					if (gtr < 0) gtr = -gtr;
    					if (gtr > k) {
	    					int mask1 = mask | (1 << next);
							dp[mask1][next] += dp[mask][i];
						}
    				}
    			}
    		}
    	}
    }
    for (int i = 0; i < n; i++) {
    	ans += dp[(1 << n) - 1][i];
    } 
    cout << ans;
}


    

