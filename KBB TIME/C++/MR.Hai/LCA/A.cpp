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
kien n, k, m, dem, par[1005 + 5][20], depth[1000000];
kien LOG, maxx, minn, vtr, ans, l, r, dist[1000000];
vector <pair <int, int>> dp[1005];

void dfs(int u, int pre) {
	par[u][0] = pre;
	for (int i = 1; i <= LOG; i++) {
		par[u][i] = par[par[u][i - 1]][i - 1];
	}
	depth[u] = depth[pre] + 1;
	for (auto v : dp[u]) {
		if (v.first != pre) {
			dist[v.first] = dist[u] + v.second;
			dfs(v.first, u);
		}
	}
}

int find_LCA (int u, int v) {
	if (depth[u] > depth[v]) {
		swap(u ,v);
	}
	for (int i = LOG; i >= 0; i--) {
		if (depth[par[v][i]] >= depth[u]) {
			v = par[v][i];
		}
	}
	if (u == v) {
		return u;
	}
	for (int i = LOG; i >= 0; i--) {
		if (par[u][i] != par[v][i]) {
			u = par[u][i];
			v = par[v][i];
		}
	}
	return par[u][0];
}

int get(int u, int v) {
	int lca = find_LCA(u, v);
	return (dist[u] - dist[lca]) + (dist[v] - dist[lca]);
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien q, u , v, c;
    cin >> n >> q;
    LOG = __lg(n);
    for (int i = 1; i <= n - 1; i++) {
    	cin >> u >> v >> c;
    	dp[u].push_back({v, c});
    	dp[v].push_back({u, c});
    }
    dfs(1, 0);
    for (int i = 1; i <= q; i++) {
    	cin >> l >> r;
    	cout << get (l , r) << "\n";
    }
}
    