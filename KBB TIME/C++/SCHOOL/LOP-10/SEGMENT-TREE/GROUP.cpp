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
kien n, k, m, dem, f[NT + 5], a[1000000], R;
kien maxx, minn, vtr, ans, l, r, dp[1000000];
    
JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin >> n >> k >> R;
    for (int i = 1; i <= n; i = i + 1) {
		cin >> a[i];
    }
    f[0] = 0;
    for (int i = 1; i <= n; i = i + 1) {
        f[i] = f[i - 1] + a[i];
    }
    for (int m = R + 1; m <= n; m = m + 1) {
        kien maxx = f[m] / k;
        kien vtr = m / k;
        if (maxx < vtr) {
            ans = maxx;
        } else {
            ans = vtr;
        }
        cout << ans;
        if (m < n) {
            cout << ' ';
        }
    }
    cout << '\n';
}
