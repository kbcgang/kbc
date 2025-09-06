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
const int MXN = 5e4 + 5;
kien n, k, m, dem, a[1000000], f[MXN];
vector <int> ans[505];
kien maxx, minn, vtr, l, r, dp[505][505];

namespace sub4 {
	void solve() {
		const kien INF = (kien)9e18;
	    for (int i = 1; i <= n; ++i) {
	        for (int len = 0; len <= n; ++len) {
	            dp[i][len] = INF;
	        }
	    }
	    for (int i = 1; i <= n; ++i) {
	        dp[i][1] = a[i];
	    }
	    for (int len = 2; len <= n; ++len) {
	        for (int i = 1; i <= n; ++i) {
	            for (int j = 1; j < i; ++j) {
	                if (a[j] < a[i]) {
	                    if (dp[j][len-1] != INF) {
	                        kien tmp = dp[j][len-1] + a[i];
	                        if (tmp < dp[i][len]) {
	                            dp[i][len] = tmp;
	                        }
	                    }
	                }
	            }
	        }
	    }
	    int ans = 0;
	    for (int len = 1; len <= n; ++len) {
	        bool ok = false;
	        for (int i = 1; i <= n; ++i) {
	            if (dp[i][len] <= k) {
	                ok = true;
	                break;
	            }
	        }
	        if (ok) {
	            if (len > ans) ans = len;
	        }
	    }
	    cout << ans << '\n';
	}
}

namespace sub5 {
	void solve() {
		f[1] = 1;
		int res = 1;
		for (int i = 2; i <= n; i++) {
			int l = 1, r = res, j = 0;
			while (l <= r) {
				int m = (l + r) / 2;
				if (a[i] > a[f[m]]) {
					j = m;
					l = m + 1;
				} else r = m - 1;
			}
			if (j == res) f[++res] = i;
			if (a[i] < a[f[j + 1]]) f[j + 1] = i;
		}
		cout << res << "\n";
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    if (n <= 500) {
    	sub4::solve();
    }
    else {
    	sub5::solve();
    }
}
    