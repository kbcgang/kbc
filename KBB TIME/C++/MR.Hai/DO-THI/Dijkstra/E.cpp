/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define pii pair<long long,int>
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
const int MXN = 1e3 + 5;
const long long INF = (long long)4e15;
kien n, m, dem, f[MXN + 5], visa[MXN];
long long d[MXN];
unordered_map<int,int> pp;
kien a[MXN][MXN];
vector<pii> dp[MXN];

double dijkstra(int less) {
    priority_queue<pii, vector<pii>, greater<pii>> q;
    for (int i = 1; i <= n; i++) {
        d[i] = INF;
        visa[i] = 0;
    }
    d[1] = 0;
    q.push({0LL, 1});
    while (!q.empty()) {
        auto cur = q.top(); 
        q.pop();
        long long du = cur.first;
        int u = cur.second;
        if (visa[u]) {
        	continue;
        }
        if (du != d[u]) {
        	continue;
        }
        visa[u] = 1;
        for (auto v : dp[u]) {
            if (visa[v.first]) continue;
            if (a[u][v.first] >= less and d[v.first] > d[u] + v.second) {
                d[v.first] = d[u] + v.second;
                q.push({d[v.first], v.first});
            }
        }
    }
    if (d[n] >= INF) return -1.0;
    return (double)less / (double)d[n];
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    kien u , v, c;
    for (int i = 1; i <= m; i++) {
        cin >> u >> v >> c >> f[i];
        a[u][v] = f[i];
        a[v][u] = f[i];
        dp[u].push_back({v, c});
        dp[v].push_back({u, c});
    }
    double res = -1.0;
    pp.clear();
    for (int i = 1; i <= m; i++) {
        int tmp = (int)f[i];
        if (pp[tmp]) continue;
        pp[tmp] = 1;
        double val = dijkstra(tmp);
        if (val > res) res = val;
    }
    if (res < 0) {
        cout << 0 << '\n';
    } 
    else {
        kien ans = (long long) floor(res * 1e6 + 1e-9);
        cout << ans << '\n';
    }
}
