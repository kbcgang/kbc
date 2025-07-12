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
kien n, k, m, dem, b[Million + 5];
kien maxx, minn, vtr, ans, l, r, dp[2005][(1 << 10)];
pair <kien, kien> a[Million];
unordered_map <kien, kien> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> b[i];
    	pp[b[i]]++;
    }
    for (int i = 1; i <= n; i++) {
    	if (pp[b[i]] > 0) {
    		k++;
    		a[k].first = b[i];
    		a[k].second = pp[b[i]];
    		maxx = max(maxx, a[k].second);
    		pp[b[i]] = 0;
    	}
    }
    sort (a + 1, a + 1 + k);
    memset (dp, -1, sizeof dp);
    dp[1][0] = 0;
    for (int i = 1; i < k; i++) {
    	dp[i][1] = max(dp[i][1], a[i].second);
    	int d = a[i + 1].first - a[i].first;
    	for (int mask = 0; mask < (1 << 10); mask++) {
    		if (dp[i][mask] == -1) continue;
    		int mask1 = (d >= 10 ? 0 : (mask << d) & ((1 << 10) - 1));
    		// cout << d << " ";
    		// for (int k = 0; k < 10; k++) {
    		// 	cout << ((mask1 >> k) & 1);
    		// }
    		// cout << endl;
    		if (!((mask1 >> 1) & 1) and !((mask1 >> 8) & 1) and !((mask1 >> 9) & 1)) {
    			dp[i + 1][mask1 | 1] = max(dp[i + 1][mask1 | 1], dp[i][mask] + a[i + 1].second);
    		}
    		dp[i + 1][mask1] = max(dp[i + 1][mask1], dp[i][mask]); 
    	}
    }
    for (int mask = 0; mask < (1 << 10); mask++) {
    	maxx = max(maxx, dp[k][mask]);
    }
    cout << n - maxx;
    // sort (a.begin(), a.end());
    // for (int i = 0; i < a.size(); i++) {
    // 	if (pp[a[i] + 1] > 0 or pp[a[i] + 9] > 0 or pp[a[i] + 8] > 0) {
    // 		if (pp[a[i]] < pp[a[i] + 1] + pp[a[i] + 9] + pp[a[i] + 8]) {
    // 			ans += pp[a[i]];
    // 		}
    // 	}
    // 	else {

    // 	}
    // }

}
    