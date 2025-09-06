/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define int long long 
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n, k, m, dem, num[Million + 5], low[200005];
int maxx, minn, vtr, ans, l, r;
vector<pair<int,int>> dp[200005];

void dfs(int u, int pa) { 
    num[u] = ++dem;
    low[u] = num[u];
    for (auto &e : dp[u]) {
        int v = e.first;
        int vtr = e.second;
        if (vtr == pa) {
            continue; 
        }
        if (num[v] == 0) {
            dfs(v, vtr);
            low[u] = min(low[u], low[v]);
            if (low[v] > num[u]) {
                ans++;
            }
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
    cin >> n;
    kien u , v;
    vtr = 0;
	for (int i = 1; i < n; i++) {
		cin >> u >> v;
        ++vtr;
		dp[u].push_back({v, vtr});
		dp[v].push_back({u, vtr});
	}
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> u >> v;
        ++vtr;
		dp[u].push_back({v, vtr});
		dp[v].push_back({u, vtr});
	}
	for (int i = 1; i <= n; i++) {
		if (num[i] == 0) {
			dfs(i , 0);
		}
	}
	cout << ans;
}
