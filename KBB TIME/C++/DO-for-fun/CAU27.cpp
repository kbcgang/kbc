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
unordered_map <int, string> pp;

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

int change(string s) {
	int tong = 0;
	for (int i = 0; i < s.size(); i++) {
		tong *= 10;
		tong += (s[i] - 48);
	}
	return tong;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    string s;
    cin >> s;
    s += 'a';
    dem = 1;
    for (int i = 0; i < s.size(); i++) {
    	if (s[i] >= '0' and s[i] <= '9') {
    		pp[dem] += s[i];
    	}
    	else if (s[i - 1] >= '0' and s[i - 1] <= '9') {
    		dem++;
    	}
    }
    for (int i = 1; i <= dem; i++) {
    	k = change(pp[i]);
    	if (f[k] == 0) {
    		ans = max(ans, k);
    	}
    }
    cout << ans;
}
    