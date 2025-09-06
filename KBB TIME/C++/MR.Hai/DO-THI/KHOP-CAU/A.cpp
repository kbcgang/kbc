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
kien n, k, m, dem, low[Million + 5], num[1000000];
kien maxx, minn, vtr, ans, ans1[Million], l, r;
vector <int> dp[Million];

void dfs(int u, int pa) {
	num[u] = ++dem;
	low[u] = num[u];
	int caycon = 0;
	for (int v : dp[u]) {
		if (v == pa) {
			continue;
		}
		caycon++;
		if (num[v] == 0) {
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if (low[v] > num[u]) ans++;
			if (pa == 0) {
				if (caycon > 1) ans1[u] = 1;
			}
			else if (low[v] >= num[u]) ans1[u] = 1;
		}
		else {
			low[u] = min(low[u], num[v]);	
		}
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    kien u, v;
    for (int i = 1; i <= m; i++) {
    	cin >> u >> v;
    	dp[u].push_back(v);
    	dp[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
    	if (num[i] == 0) {
    		dfs(i, 0);
    	}
    }
    for (int i = 1;  i<= n; i++) {
    	if (ans1[i] == 1) {vtr++; }
    }
    cout << vtr << " " << ans;
}
