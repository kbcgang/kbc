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
const int BASE = 26;
// const int 
kien n, k, m, dem, pow1[1000000];
kien maxx, minn, vtr[Million], ans, l, r, f[1000000];
unordered_map <kien, kien> pp;

bool ktr(int mid) {
	pp.clear();
	for (int i = 1; i <= n - mid + 1; i++) {
		vtr[i] = (f[i + mid - 1] - f[i - 1] * pow1[mid]) % MOD;
		pp[vtr[i]]++;
		if (pp[vtr[i]] >= k) {
			return true;
		}
	}
	return false;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    string s;
    cin >> s;
    s = ' ' + s;
    pow1[0] = 1;
    for (int i = 1; i <= n; i++) {
    	pow1[i] = (pow1[i - 1] * BASE) % MOD;
    }
    for (int i = 1; i <= n; i++ ){
    	f[i] = ((f[i - 1] * BASE) % MOD + (s[i] - 'a' + 1)) % MOD;
    	if (f[i] < 0) {
    		f[i] += MOD;
    	}
    }
    int l = 0, r = n;
    int mid, kq = 0;
    while (l <= r) {
    	mid = (l + r) >> 1;
    	if (ktr(mid)) {
    		kq = mid;
    		l = mid + 1;
    	}
    	else {
    		r = mid - 1;
    	}
    }
    cout << kq;
}
