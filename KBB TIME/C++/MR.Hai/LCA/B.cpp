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
const int MXN = 1e5 + 5;
kien n, k, m, dem, depth[MXN + 5], par[MXN][20];
kien LOG, maxx, minn, vtr1, vtr2, ans, l, r;
vector <int> dp[MXN];

void dfs (int u, int pre) {
	par[u][0] = pre;
	for (int i = 1; i <= LOG; i++) {
		par[u][i] = par[par[u][i - 1]][i - 1];
	}
	depth[u] = depth[pre] + 1;
	for (auto v : dp[u]) {
		if (!depth[v]) {
			dfs(v, u);
		}
	}
}

int find_LCA (int u, int v) {
	if (depth[u] > depth[v]) {
		swap(u, v);
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

kien dist(int x, int y) {
    int l = find_LCA(x, y);
    return depth[x] + depth[y] - 2*depth[l];
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien q, u, v;
    cin >> n >> q;
    LOG = __lg(n);
    for (int i = 1; i <= n - 1; i++) {
    	cin >> u >> v;
    	dp[u].push_back(v);
    	dp[v].push_back(u);
    }
    dfs(1 , 0);
    kien a, b, r;
    for (int i = 1; i <= q; i++) {
    	cin >> a >> b >> r ;
    	// cout << a << " " << b << " " << r << "\n";
    	// vtr1 = find_LCA(a, r);
    	// vtr2 = find_LCA(b, r);
    	// cout << vtr << " ";
    	if (dist(a, b) == dist(a, r) + dist(b, r)) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}
    }
}
    