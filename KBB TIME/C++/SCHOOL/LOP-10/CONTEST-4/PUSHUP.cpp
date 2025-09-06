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
kien n, k, m, demn, a[1000000], s, demt;
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
    	cin >> a[i];
    }
    int maxx = n + 1;
    unsigned char dp[maxx * maxx];
    memset (dp, 0, maxx * maxx);
    dp[0] = 1;
    for (int k = 0; k <= n; k++) {
    	for (int t = 0; t <= n; t++) {
    		if (dp[k * maxx + t]) {
    			for (int i = 0; i < m; i++) {
    				s = a[i];
    				demt = t + s;
    				demn = k + demt;
    				if (demn <= n and demt <= n) {
    					dp[demn * maxx + demt] = 1;
    				}
    			}
    		}
    	}
    }
    ans = -1;
    for (int i = n; i >= 0; i--) {
    	if (dp[n * maxx + i]) {
    		ans = i;
    		break;
    	}
    }
    cout << ans;
}
