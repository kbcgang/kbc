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
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans, l, r;
kien seg[Million];

void build(int id, int l, int r) {
	if (l == r) {
		seg[id] = a[l];
	}
	else {
		int mid = (l + r) / 2;
		build(id * 2, l , mid);
		build(id * 2 + 1, mid + 1, r);
		seg[id] = min(seg[id * 2], seg[id * 2 + 1]);
	}
}

kien check (int id, int l, int r, int u, int v) {
	if (v < l || r < u) return INT_MAX;
	if (u <= l and r <= v) {
		return seg[id];
	}
	int mid = (l + r) / 2;
	int left = check(id * 2, l , mid, u, v);
	int right = check(id * 2 + 1, mid + 1, r, u, v);
	return min(left, right);
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    build (1 , 1, n);
    kien q;
    cin >> q;
    while (q--) {
    	cin >> l >> r;
    	cout << check(1, 1, n, l , r) << "\n";
    }
}
    