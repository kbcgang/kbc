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
kien n, k, m, dem, depth[MXN + 5],par[MXN][20];
kien maxx, minn, vtr, ans, l, r, LOG; 
vector <int> dp[1000000];

void dfs(int u, int pre) {
	par[u][0] = pre;
	for (int i = 1; i <= LOG; i++) {
		par[u][i] = par[par[u][i - 1]][i - 1];
	}
	depth[u] = depth[pre] + 1;
	for (auto v : dp[u]) {
		if (!depth[v]) {
			dfs(v ,u);
		}
	}  
}

int find_LCA(int u, int v) {
	if (depth[u] > depth[v]) {
		swap(u , v);
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

void build (int id, int l, int r) {
	
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	kien q, u , v;
	cin >> n >> q;
	LOG = __lg(n);
	for (int i = 1; i < n; i++) {
		cin >> u >> v;
		dp[u].push_back(v);
		dp[v].push_back(u);
	}    
}
