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
kien n, k, m, dem, sz[Million + 5], par[1000000];
kien maxx, minn, vtr, ans, l, r, mn[1000000], mx[Million];

void reset(int n) {
	for (int i = 1; i <= n; i++) {
		par[i] = i;
		sz[i] = 1;
		mn[i] = i;
		mx[i] = i;
	}
}

int find_set(int u) {
	return (u == par[u] ? u : par[u] = find_set(par[u]));
}

void union_set(int u, int v) {
	u = find_set(u);
    v = find_set(v);
    if (u == v) {
        return;
    }
    if (sz[u] < sz[v]) {
        int tmp = u;
        u = v;
        v = tmp;
    }
    par[v] = u;
    if (mn[v] < mn[u]) {
        mn[u] = mn[v];
    }
    if (mx[v] > mx[u]) {
        mx[u] = mx[v];
    }
    sz[u] = sz[u] + sz[v];
}


JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    reset(n);
    string s;
    kien u , v;
    for (int i = 1; i <= m; i++) {
    	cin >> s;
    	if (s == "union") {
    		cin >> u >> v;
    		union_set(u , v);
    	}
    	if (s == "get") {
    		cin >> k;
    		vtr = find_set(k);
    		cout << mn[vtr] << " " << mx[vtr] << " " << sz[vtr] << '\n';
    	}
    }
}
