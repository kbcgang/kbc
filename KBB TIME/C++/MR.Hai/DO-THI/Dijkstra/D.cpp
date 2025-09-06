/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define pii pair<int,int>
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
const int MXN = 105;
kien n, d[MXN + 5][MXN + 5], a[105][105], visa[MXN];
kien minn, vtr, ans;
vector<pii> dp[MXN];
priority_queue<pii, vector<pii>, greater<pii>> q;

void dijkstra(int s) {
    for (int i = 1; i <= n; i++) {
    	d[s][i] = MOD;
    }
    d[s][s] = 0;
    q.push({0, s}); 
    while (!q.empty()) {
        int c = q.top().first;
        int u = q.top().second;
        q.pop();
        if (c > d[s][u]) continue;
        for (auto v : dp[u]) {
            if (d[s][v.first] > d[s][u] + v.second) {
                d[s][v.first] = d[s][u] + v.second;
                q.push({d[s][v.first], v.first});
            }
        }
    }
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1 ; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (i != j && a[i][j] > 0) {
                dp[i].push_back({j, a[i][j]});
            }
        }
    }
    for (int i = 1; i <= n; i++) {
    	dijkstra(i);
    }
    memset(visa, 0, sizeof(visa));
    kien s = 1;
    for (int i = 1; i <= n - 2; i++) {
        visa[s] = 1;
        minn = MOD;
        for (int j = 1; j <= n - 1; j++) {
            if (!visa[j] && minn > d[s][j]) {
                minn = d[s][j];
                vtr = j;
            }
        }
        ans += minn;
        s = vtr;
    }
    ans += d[vtr][n];
    cout << ans;
}
