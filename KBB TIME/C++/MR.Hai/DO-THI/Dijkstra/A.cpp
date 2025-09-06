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
#define MOD 1000000000007
kien n, k, m, dem, d[Million + 5], vis[1000000];
kien maxx, minn, vtr, l, r, trace[Million + 5];
vector <pair <int, int>> dp[100005];
priority_queue <pair<int, int>, vector<pair <int, int>>, greater<pair <int, int>>> q;

void dijkstra(int s) {
	for (int i = 1; i <= n; i++) {
		d[i] = MOD;
		vis[i] = 0;
	}
	d[s] = 0;
	q.push({0, s});
	while (!q.empty()) {
		int u = q.top().second;
		q.pop();
		if (vis[u]) continue;
		vis[u] = 1;
		for (auto v : dp[u]) {
			if (vis[v.first]) continue;
			if (d[v.first] > d[u] + v.second) {
				d[v.first] = d[u] + v.second;
				trace[v.first] = u;
				q.push({d[v.first], v.first});
			}
		}
	}
	if (d[n] == MOD) {
		return (void)(cout << -1);
	}
	vector <int> ans;
	int u = n;
	while (u != 1) {
		ans.push_back(u);
		u = trace[u];
	}
	ans.push_back(1);
	reverse(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    kien u , v , w;
    for (int i = 1; i <= m; i++) {
    	cin >> u >> v >> w;
    	dp[u].push_back({v, w});
    	dp[v].push_back({u, w});
    }
    dijkstra(1);
}
    