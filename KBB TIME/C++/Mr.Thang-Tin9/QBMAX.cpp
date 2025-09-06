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
kien n, k, m, dem, f[NT + 5], a[105][105];
kien maxx, minn, vtr, ans, l, r, dp[105][105];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
    	for (int j = 1; j <= n; j++) {
    		cin >> a[i][j];
    	}
    }
    for (int i = 1; i <= m; i++) {
    	for (int j = 1; j <= n; j++) {
    		dp[i][j] = LLONG_MIN;
    	}
    }
    for (int i = 1; i <= m; i++) {
    	dp[i][1] = a[i][1];
    }
    for (int j = 2; j <= n; j++)  {
  		for (int i = 1; i <= m; i++) {
  			kien vtr = dp[i][j-1];
            if (i - 1 >= 1) {
                if (dp[i-1][j-1] > vtr) {
                    vtr = dp[i-1][j-1];
                }
            }
            if (i + 1 <= m) {
                if (dp[i+1][j-1] > vtr) {
                    vtr = dp[i+1][j-1];
                }
            }
            dp[i][j] = vtr + a[i][j];
  		}
    }
    ans = LLONG_MIN;
    for (int i = 1; i <= m; i++) {
    	ans = max(ans, dp[i][n]);
    }
    cout << ans;
}
    