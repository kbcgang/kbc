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
kien n, k, m, dem, a[Million + 5], d, c;
kien maxx, minn, vtr, ans, l, r;
kien st[5 * Million];

void build (int id, int l, int r) {
	if (l == r) {
		st[id] = a[l];
	}
	else {
		int mid = (l + r) / 2;
		build(id * 2, l , mid);
		build(id * 2 + 1, mid + 1, r);
		st[id] = st[id * 2] + st[id * 2 + 1];
	}
}

void update (int id, int l , int r , int pos, kien val) {
	if (l == r) {
		st[id] = val;
	}
	else {
		int mid = (l + r) / 2;
		if (pos <= mid) {
			update (id * 2, l , mid, pos, val);
		}
		else {
			update (id * 2 + 1, mid + 1, r, pos , val);
		}
		st[id] = st[id * 2] + st[id * 2 + 1];
	}	
}

kien sum (int id, int l, int r, int u, int v) {
	if (v < l || r < u) return 0;
	if (u <= l and r <= v) {
		return st[id];
	}
	int mid = (l + r) / 2;
	kien left = sum(id * 2, l, mid, u , v);
	kien right = sum(id * 2 + 1, mid + 1, r, u , v);
	return left + right;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int q;
    cin >> q;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    build (1 , 1, n);
    while (q--) {
    	cin >> k >> d >> c;
    	if (d > c ) swap (d, c);
    	if (k == 0) {
    		swap (a[d], a[c]);
    		update (1, 1, n, d, a[d]);
    		update (1 , 1, n, c ,a[c]);
    	}
    	else {
    		cout << sum(1 , 1, n, d , c) << "\n";
    	}
    }
}

 