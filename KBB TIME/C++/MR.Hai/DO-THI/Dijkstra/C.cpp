/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define pii pair<kien,int>
#define int long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 10000000000008
const int MXN = 1005; 
int n, m, k, maxx, vtr, u[100005], v[100005], w[100005]; 
vector<pii> dp[MXN];
kien dist[MXN][MXN];
int l[1005], r[1005];

void dijkstra(int s) {
    for (int i = 1; i <= n; ++i) { 
        dist[s][i] = MOD;
    }
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[s][s] = 0;
    pq.push({0, s});
    while (!pq.empty()) {
        auto cur = pq.top(); pq.pop();
        int node = cur.second;
        kien du = cur.first;
        if (du != dist[s][node]) continue;
        for (auto e : dp[node]) {
            int to = e.first;
            int wt = e.second;
            if (dist[s][to] > du + wt) {
                dist[s][to] = du + wt;
                pq.push({dist[s][to], to});
            }
        }
    }
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= m; ++i) {
        cin >> u[i] >> v[i] >> w[i];
        dp[u[i]].push_back({v[i], w[i]});
        dp[v[i]].push_back({u[i], w[i]});
    }
    for (int i = 1; i <= k; ++i) {
        cin >> l[i] >> r[i];
    }
    for (int i = 1; i <= n; ++i) {
        dijkstra(i);
    }
    for (int i = 1; i <= k; ++i) {
        if (dist[l[i]][r[i]] >= MOD/2) { 
            vtr = MOD;
            break;
        }
        vtr += dist[l[i]][r[i]];
    }
    kien ans = vtr;
    for (int t = 1; t <= m; ++t) {
        int dau = u[t], cuoi = v[t];
        kien tmp = 0;
        bool check = false;
        for (int i = 1; i <= k; ++i) {
            maxx = dist[l[i]][r[i]];
            if (dist[l[i]][dau] < MOD/2 and dist[cuoi][r[i]] < MOD/2) { /// TH1
                maxx = min(maxx, dist[l[i]][dau] + dist[cuoi][r[i]]);
            }
            if (dist[l[i]][cuoi] < MOD/2 and dist[dau][r[i]] < MOD/2) { /// TH2
                maxx = min(maxx, dist[l[i]][cuoi] + dist[dau][r[i]]);
            }
            if (maxx >= MOD/2) { 
            	check = true; 
            	break; 
            }
            tmp += maxx;
            if (tmp >= ans) {
            	break; 
            }
        }
        if (!check) ans = min(ans, tmp);
    }
    if (ans >= MOD/2) { 
    	cout << -1 << '\n';
	}
    else { 
    	cout << ans << '\n';
	} 
}
