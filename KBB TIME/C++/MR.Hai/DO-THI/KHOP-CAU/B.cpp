/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
kien n , m, dem, num[Million + 5], low[Million + 5];
kien sz[Million + 5], ans;
vector<pair<int,int>> dp[Million + 5]; // (neighbor, edge_id)

void dfs(int u, int pa) {
    num[u] = ++dem;
    low[u] = num[u];
    sz[u] = 1;
    for (auto &pr : dp[u]) {
        int v = pr.first;
        int id = pr.second;
        if (id == pa) continue; 
        if (num[v] == 0) {
            dfs(v, id);
            sz[u] += sz[v];
            low[u] = min(low[u], low[v]);
            if (low[v] > num[u]) {
                ans += (kien)sz[v] * (n - sz[v]);
            }
        } else {
            low[u] = min(low[u], num[v]);
        }
    }
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    kien u ,v;
    for (int i = 1; i <= m; ++i) {
        cin >> u >> v;
        dp[u].push_back({v, i});
        dp[v].push_back({u, i});
    }
    for (int i = 1; i <= n; ++i) {
        if (num[i] == 0) 
        	dfs(i, 0);
    }
    cout << ans;
    return 0;
}
