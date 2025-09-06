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
const int BASE = 257;
kien n, k, m, dem, pow1[2 * Million + 5];
kien maxx, minn, vtr, ans, l, r, f[2000005];

bool ktr(int old, int cur, int mid) {
	int left = (f[old + mid] - (f[old] * pow1[mid]) % MOD ) % MOD;
	if (left < 0) left += MOD;
	int right = (f[cur + mid] - (f[cur] * pow1[mid]) % MOD) % MOD;
	if (right < 0) right += MOD;
	return left == right;
}

int tknp(int old, int cur) {
	int l = 0, r = n;
	int mid, kq = 0;
	while (l <= r) {
		mid = (l + r) >> 1;
		if (ktr(old, cur, mid)) {
			kq = mid;
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string s, cur;
	cin >> s;
	cur = s;
	s += s;
	n = cur.size();
	pow1[0] = 1;
	for (int i = 1; i <= s.size(); i++) {
		pow1[i] = (pow1[i - 1] * BASE) % MOD;
	}
	f[0] = 0;
	for (int i = 1; i <= s.size(); i++) {
		f[i] = ((f[i - 1] * BASE) % MOD + (s[i - 1] - 'a' + 1)) % MOD;;
	}
	int tmp = 0;
	for (int i = 1; i <= n - 1; i++) {
		vtr = tknp(tmp, i);
		if (vtr == n) {
			continue;
		}
		if (s[i + vtr] < s[tmp + vtr]) {
			tmp = i;
		}
	}
	for (int i = tmp; i < tmp + n; i++) {
		cout << s[i];
	}
}
    