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
const int MXN = 1e5 + 5;
kien n, k, m, dem, par[MXN + 5], sz[1000000], visit[MXN];
kien maxx[MXN] ,minn, vtr, ans, l, r, a[Million];
vector <int> dp[MXN];

void reset (int n) {
	for (int i = 1; i <= n; i++) {
		par[i] = i;
		sz[i] = 1;
		maxx[i] = a[i];
	}
}

int find_set(int u) {
	return (par[u] == u ? u : par[u] = find_set(par[u]));
}

void union_set(int u, int v) {
	u = find_set(u);
	v = find_set(v);
	if (u == v) {
		return;
	}
	if (sz[u] < sz[v]) {
		swap (u , v);
	}
	ans += maxx[u] + maxx[v];
	sz[u] += sz[v];
	par[v] = u;
	if (maxx[v] > maxx[u]) maxx[u] = maxx[v];
}

// struct KBB {
// 	kien cur, lazy;
// }; KBB st[MXN];
kien st[MXN];

void build (int id, int l, int r) {
	if (l == r) {
		st[id] = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build (id << 1, l, mid);
	build (id << 1 | 1, mid + 1, r);
	st[id] = max(st[id << 1], st[id << 1 | 1]);
}

void update (int id, int l, int r, int u, int v) {
	if (u > r or v < l) {
		return;
	}
	if (u <= l and r <= v) {
		st[id] = 0;
	}
	int mid = (l + r) >> 1;
	update (id << 1, 1 , n, l , mid);
	update (id << 1 | 1, 1, n, mid + 1 , r);
	st[id] = max(st[id << 1], st[id << 1 | 1]);
}

kien get(int id, int l, int r, int u, int v) {
	if (u > r or r < l) {
		return 0;
	}
	if (u <= l and r <= v) {
		return st[id];
	}
	int mid = (l + r) >> 1;
	return max(get(id << 1, 1, n, l ,mid), get(id << 1 | 1, 1 , n, mid + 1, r));
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    	dp[i].clear();
    	// q.push_back(a[i]);
    }
    build (1 ,1 ,n);
    kien u , v;
    for (int i = 1; i < n; i++) {
    	cin >> u >> v;
    }
    reset(n);
    
}
    




