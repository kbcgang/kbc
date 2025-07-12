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
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

bool ktr (int n) {
	if (n < 2) return false;
	if (n == 2 or n == 3) return true;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    kien t, x, y , z;
    cin >> t;
    cin >> x >> y >> z;
    for (int i = 1; i <= n; i++) {
    	a[i] = (x * i) % z + y;
    	f[i] = f[i-1];
    	if (ktr(a[i])) {
    		f[i] = f[i - 1] + 1;
    	}
    }
    while (t--) {
    	cin >> l >> r;
    	cout << f[r] - f[l - 1] << "\n";
    }
}
    