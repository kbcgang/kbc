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
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r, dp[100005];
pair <int, int> a[Million];

void motchieu() {
	for (int i = 1; i <= n; i++) {
		for (int j = k; j >= 0; j--) {
			if (j >= a[i].first) {
				dp[j] = max(dp[j], dp[j - a[i].first] + a[i].second);
			}
		}
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i].first >> a[i].second;
    }
    motchieu();
    // for (int i = 1; i <= n; i++) {
    // 	minn = a[i].second;
    // 	for (int j = 0; j <= k; j++) {
    // 		dp[i][j] = dp[i-1][j];
    // 		if (j >= a[i].first) {
    // 			dp[i][j] = max(dp[i][j], dp[i-1][j - a[i].first] + minn);
    // 		}
    // 	}
    // }
    cout << dp[k];
}
    