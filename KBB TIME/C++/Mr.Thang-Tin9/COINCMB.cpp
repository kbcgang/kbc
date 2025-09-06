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
kien n, a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    	dp[a[i]] = 1;
    }
    sort (a + 1, a + 1 + n);
    dp[0] = 0;
    for (int i = 1; i <= x; i++) {
    	dp[i] = 0;
    	for (int j = 1; j <= n; j++) {
    		if (i >= a[j] and dp[i - a[j]] > 0) {
    			dp[i] += (dp[i - a[j]] + dp[a[j]]) % MOD;
    			dp[i] %= MOD;
    		}
    	}
    	cout << dp[i] << " ";
    }
    cout << dp[x];
}
    