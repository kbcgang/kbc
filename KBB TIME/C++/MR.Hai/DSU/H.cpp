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
kien n, k, m, dem, par[Million + 5], sz[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void reset(int n) {
	for (int i = 1; i <= n; i++) {
		par[i] = i;
		sz[i] = 1;
	}
}

int find_set (int u) {
	return (u == par[u] ? u : par[u] = find_set(par[u]));
}

void union_set (int u, int v) {
	u = find_set(u);
	v = find_set(v);
	if (u == v) {
		return;
	}
	// cout << sz[u] << " " << sz[v] << "\n";
	sz[u] += sz[v];
	par[u] = v;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    reset(n);
    kien u, v, t;
    for (int i = 1; i <= m; i++) {
    	cin >> t >> u;
    	if (t == 1) {
    		cin >> v;
    		union_set(u , v);
    	}
    	else {
    		while (par[u] != u) {
    			u = par[u];
    			dem++;
    		}
    		cout << dem << "\n";
    		dem  = 0;
    	}
    }
}
    