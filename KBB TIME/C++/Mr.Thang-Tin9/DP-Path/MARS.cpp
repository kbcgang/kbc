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
kien n, k, m, dem, a[5005][5005];
kien maxx, minn, vtr, ans, l, r, dp[5005][5005];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		cin >> a[i][j];
    	}
    }
    // int dx[5] = {0, -1};
    // int dy[5] = {1, 0};
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		if (a[i][j] != 2) {
	    		int ii = i;
	    		int jj = j - 1;
	    		if (jj >= 0) {
	    			dp[i][j] = max(dp[i][j], dp[ii][jj] + a[i][j]); 
	    		}
	    		int i2 = i - 1;
	    		int j2 = j;
	    		if (ii >= 0) {
	    			dp[i][j] = max(dp[i][j], dp[i2][j2] + a[i][j]); 
	    		}
	    	}
    	}
    }
    cout << dp[n][m];
}
    