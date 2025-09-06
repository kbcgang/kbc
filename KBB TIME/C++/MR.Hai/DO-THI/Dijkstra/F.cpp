/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define int long long
#define pii pair<long long,int>
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
const int MXN = 30005;
int n, m;
vector<pii> dp[MXN];
kien d1[MXN], d2[MXN];
kien visit1[MXN], visit2[MXN];

void dijkstra(int s, kien d[], kien visit[]) {
    for (int i = 1; i <= n; ++i) {
        d[i] = MOD;
        visit[i] = 0;
    }
    priority_queue<pii, vector<pii>, greater<pii>> q;
    d[s] = 0;
    visit[s] = 1;
    q.push({0, s});
    while (!q.empty()) {
        auto cur = q.top();
        q.pop();
        kien du = cur.first;
        int u = cur.second;
        if (du != d[u]) { 
        	continue; 
        }
        for (auto pr : dp[u]) {
            int v = pr.first;
            int w = pr.second;
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                visit[v] = visit[u];
                q.push({d[v], v});
            } 
            else if (d[v] == d[u] + w) {
                visit[v] += visit[u];
            }
        }
    }
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        dp[u].push_back({v, c});
        dp[v].push_back({u, c});
    }
    dijkstra(1, d1, visit1);
    dijkstra(n, d2, visit2);
    vector<int> ans;
    for (int i = 2; i <= n - 1; ++i) {
        if (d1[i] == MOD or d2[i] == MOD or d1[i] + d2[i] > d1[n]) {
            ans.push_back(i);
        } 
        else {
            if (visit1[i] * visit2[i] < visit1[n]) {
                ans.push_back(i);
            }
        }
    }
    cout << ans.size() << '\n';
    for (int x : ans) cout << x << '\n';
}
