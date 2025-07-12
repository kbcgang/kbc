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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];
unordered_map <kien, int> pp;

int tongcs(int n) {
	int tong = 0;
	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[1] = f[2] = 1;
    pp[1] = 1;
    for (int i = 3; i <= 50; i++) {
    	f[i] = f[i-1] + f[i-2];
    	pp[f[i]]++;
    }
    cin >> n;
    m = ceil(sqrt(n));
    for (int i = 1; i <= m; i++) {
    	if (pp[tongcs(i * i)]) {
    		ans++;
    	}
    }
    cout << ans;
}
