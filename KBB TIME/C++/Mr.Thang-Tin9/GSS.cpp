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
kien n, k, m, dem, a[1000000];
kien minn, vtr, ans, l, r;
/// KHÔNG UPDATE
/// lưu thêm maxx để xác định maxx từ x -> y

struct KBB {
	kien cur, left, right, maxx;
}; KBB st[1000000];

void build (int id, int l, int r) {
	if (l == r) {
		st[id].cur = a[l];
		st[id].left = a[l];
		st[id].right = a[l];
		st[id].maxx = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build (id << 1, l, mid);
	build (id << 1 | 1, mid + 1, r);
	st[id].cur = st[id << 1].cur + st[id << 1 | 1].cur;
	st[id].left = max(st[id << 1].left, st[id << 1].cur + st[id << 1 | 1].left);
	st[id].right = max(st[id << 1 | 1].right, st[id << 1 | 1].cur + st[id << 1].right);
	st[id].maxx = max({st[id << 1].maxx, st[id << 1 | 1].maxx, st[id << 1].right + st[id << 1 | 1].left});
}

KBB get (int id, int l, int r, int u, int v) {
    if (u > r or v < l) {
        KBB tmp;
        tmp.cur = 0;
        tmp.left = tmp.right = tmp.maxx = INT_MIN;
        return tmp;
    }
    if (u <= l and r <= v) return st[id];
    int mid = (l + r) >> 1;
    KBB L = get(id << 1, l, mid, u, v);
    KBB R = get(id << 1 | 1, mid + 1, r, u, v);
    if (L.maxx == INT_MIN) return R;
    if (R.maxx == INT_MIN) return L;
    KBB res;
    res.cur = L.cur + R.cur;
    res.left = max(L.left, L.cur + R.left);
    res.right = max(R.right, R.cur + L.right);
    res.maxx = max({L.maxx, R.maxx, L.right + R.left});
    return res;
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    build (1 , 1, n);
    kien t, x, y;
    cin >> t;
    for (int i = 1; i <= t; i++) {
    	cin >> x >> y;
    	KBB vtr = get(1, 1 , n, x, y);
    	cout << vtr.maxx << "\n";
    }
}
