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
#define MOD 10000000000007
const int MXN = 1e4 + 5;
kien n, k, m, dem, f[NT + 5], d[MXN][25];
kien maxx, minn, vtr, ans, l, r;
vector <pair <int, int>> dp[MXN];

struct KBB {
	int uk, ku;
	kien duk;
};

struct cmp {
	bool operator () (KBB a, KBB b) {
		return a.duk > b.duk;
	}
};
priority_queue <KBB, vector <KBB>, cmp> q;

void dijkstra(int s) {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			d[i][j] = MOD;
		}
	}
	d[s][0] = 0;
	q.push({s, 0 , 0});
	while (!q.empty()) {
		int u = q.top().uk;
		int kk = q.top().ku;
		kien duck = q.top().duk;
		q.pop();
		if (duck > d[u][kk]) {
			continue;
		}
		for (auto v : dp[u]) {
			if (d[v.first][kk] > d[u][kk] + v.second) {
				d[v.first][kk] = d[u][kk] + v.second;
				q.push({v.first, kk , d[v.first][kk]});
			}
			if (kk + 1 <= k and d[v.first][kk + 1] > d[u][kk]) {
				d[v.first][kk + 1] = d[u][kk];
				q.push({v.first, kk + 1, d[v.first][kk + 1]});
			}
		}
	}
	ans = LLONG_MAX;
	for (int i = 0; i <= k; i++) {
		ans = min(ans, d[n][i]);
	}
	cout << ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    kien u , v, c;
    for (int i = 1; i <= m; i++) {
    	cin >> u >> v >> c;
    	dp[u].push_back({v, c});
    	dp[v].push_back({u , c});
    }
    dijkstra(1);
}
    