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
kien n, k, m, dem, f[NT + 5];
double d[MXN][25];
kien maxx, minn, vtr, ans, l, r;
vector <pair <int, int>> dp[MXN];

struct KBB {
	int uk, ku;
	double duk;
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
		double duck = q.top().duk;
		q.pop();
		if (duck > d[u][kk]) {
			continue;
		}
		for (auto v : dp[u]) {
			double w = v.second;
			for (int k2 = kk; k2 <= k; k2++) {
				if (d[v.first][k2] > d[u][kk] + w) {
					d[v.first][k2] = d[u][kk] + w;
					q.push({v.first, k2, d[v.first][k2]});
				}
				w /= 2;
			}
		}
	}
	cout <<fixed << setprecision(2) << d[n][k];
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
    