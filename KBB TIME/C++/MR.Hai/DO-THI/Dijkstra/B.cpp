/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define int long long
#define JAV main
#define pii pair <int, int>
#define Million 1000000
#define NT 10000000
#define MOD 10000000000007
kien n, k, m, dem, d[Million + 5], vis[1000000];
kien maxx, minn, vtr, ans, l, r;
unordered_map <int, int> pp;
vector <pair <int, int>> dp[100005];
priority_queue <pii, vector <pii>, greater <pii>> q;

void dijkstra(int s) {
	for (int i = 1; i <= n; i++) {
		d[i] = MOD;
		vis[i] = 0;
	}
	q.push({0 ,s});
	pp[s] = 1;
	d[s] = 0;
	while (!q.empty()) {
		int u = q.top().second;
		q.pop();
		if (vis[u]) continue;
		vis[u] = 1;
		for (auto v : dp[u]) {
			if (vis[v.first]) continue;
			if (d[v.first] == d[u] + v.second) {
				pp[v.first] += pp[u];
			}
			if (d[v.first] > d[u] + v.second) {
				pp[v.first] = pp[u];
				d[v.first] = d[u] + v.second;
				q.push({d[v.first], v.first}); 
			}
		}
	}
	if (d[n] == MOD) {
		return (void)(cout << -1);
	}
	cout << d[n] << ' ' << pp[n];
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    kien k, u, v, l;
    for (int i = 1; i <= m; i++) {
    	cin >> k >> u >> v >> l;
    	dp[u].push_back({v, l});
    	if (k == 2)  {
    		dp[v].push_back({u, l});
    	}
    }
    dijkstra(1);
}
