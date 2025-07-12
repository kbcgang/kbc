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
kien n, k, m, dem, f[Million + 5], a[100005];
kien maxx, minn, vtr, ans, l, r, dp[100005], pre[Million];

void sangNT() {
	f[1] = f[0] = 1;
	for (int i = 2; i <= sqrt(Million); i++) {
		if (f[i] == 0) {
			for (int j = i * i; j <= Million; j += i) {
				f[j] = 1;
			}
		}
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    	if (a[i] == 1) {
    		dp[i] = 1;
    	}
    	else if (f[a[i]] == 1) {
    		for (int j = a[i]; j >= 2; j--) {
    			if (f[j] == 0) {
    				l = j;
    				break;
    			}
    		}
    		for (int j = a[i]; ;j++) {
    			if (f[j] == 0) {
    				r = j;
    				break;
    			}
    		}
    		ans = min(a[i] - l, r - a[i]);
    		f[a[i]] = ans;
    		dp[i] = ans;
    	} 
    	else  {
    		dp[i] = f[a[i]];
    	}
    	pre[i] = pre[i-1] + dp[i];
    } 
    ans = LLONG_MAX;
    for (int i = k; i <= n; i++) {
    	ans = min(ans, pre[i] - pre[i - k]);
    }
    cout << ans;
}
    