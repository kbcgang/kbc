/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
const kien INF = 1e18;
const int MAXN = 105;
int n, m, k;
vector<pair<kien, kien>> ke[MAXN]; 
kien d[MAXN];
bool dch[MAXN];

void bfs(int s) {
    for (int i = 1; i <= n; i++) {
        d[i] = INF;
        dch[i] = false;
    }
    d[s] = 0;
    priority_queue<pair<kien, int>, vector<pair<kien, int>>, greater<pair<kien, int>>> pq;
    pq.push({0, s});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (dch[u]) continue;
        dch[u] = true;
        for (auto ktr : ke[u]) {
            int v = ktr.first;
            kien w = ktr.second;
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                pq.push({d[v], v});
            }
        }
    }
}

JAV() {
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        int u, v;
        kien p, q;
        cin >> u >> v >> p >> q;
        kien tg = max(p, q);
        ke[u].push_back({v, tg});
        ke[v].push_back({u, tg});
    }
    for (int i = 1; i <= k; i++) {
        int s, t;
        cin >> s >> t;
        bfs(s);
        cout << d[t] << '\n';
    }

    return 0;
}
