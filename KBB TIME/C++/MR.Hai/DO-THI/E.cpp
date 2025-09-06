/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
const int MXN = 1e5 + 5;
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans[Million], l, r;
kien u , v, trace[MXN];
bool visa[MXN];
vector <int> dp[MXN];

void bfs() {
	queue <int> q;
	q.push(1);
	visa[1] = true;
	a[1] = 1;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 0; i < dp[u].size(); i++) {
			if (visa[dp[u][i]] == false) {
				visa[dp[u][i]] = true;
                a[dp[u][i]] = a[u] + 1;
                q.push(dp[u][i]);
                trace[dp[u][i]] = u;
			}
			if (dp[u][i] == n) {
                dem = 2;
                ans[1] = n;
                int v = n;
                while (trace[v] != 1) {
                    ans[dem] = trace[v];
                    v = trace[v];
                    dem++;
                }
                cout << a[n] << '\n';
                cout << 1 << " ";
                for (int j = dem - 1; j >= 1; j--) {
                    cout << ans[j] << " ";
                }
                return;
			}
		}
	}
	cout << "IMPOSSIBLE";
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("kien.inp","r"))
    {
        freopen("kien.inp", "r", stdin);
        freopen("kien.out", "w", stdout);
    }
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
    	cin >> u >> v;
    	dp[u].push_back(v);
    	dp[v].push_back(u);
    }
    bfs();
}
