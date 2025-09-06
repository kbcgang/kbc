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
const int MXN = 1e5 + 5; 
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr;
vector <pii> dp[MXN];
priority_queue <pii, vector <pii>, greater<pii>> q;
priority_queue <int> ans[MXN];
vector <int> res;

void dijkstra(int s) {
	q.push({0 , s});
	ans[1].push(MOD);
	while (!q.empty()) {
		int du = q.top().first;
		int u = q.top().second;
		q.pop();
		if (du > ans[u].top()) {
			continue;
		}
		for (auto v : dp[u]) {
			if (ans[v.first].size() < k) {
				ans[v.first].push(du + v.second);
				q.push({du + v.second, v.first});
			}
			else {
				if (ans[v.first].top() > du + v.second) {	
					ans[v.first].pop();
					ans[v.first].push(du + v.second);
					q.push({du + v.second, v.first});
				}
			}
		}
	}
	while (!ans[n].empty()) {
		res.push_back(ans[n].top());
		ans[n].pop();
	}
	sort(res.begin(), res.end());
	for (auto kq : res) {
		cout << kq << " ";
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    kien u, v, c;
    for (int i = 1; i <= m; i++) {
    	cin >> u >> v >> c;
    	dp[u].push_back({v, c});
    }
    dijkstra(1);
}
