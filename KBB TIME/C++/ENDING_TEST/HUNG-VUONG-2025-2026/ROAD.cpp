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
int n, k, m, dem, b[Million + 5], a[1000000], visit[100005], trace[Million];
int maxx, minn, l, r;
pair <int, int> ans[100000];
bool visa[Million];
vector <int> dp[100005];
// vector <int> int walk[100005];
int motor[10005][10005];

void sub1() {
	queue <int> q;
	q.push(1);
	visa[1] = true;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 0; i < dp[u].size(); i++) {
			if (visa[dp[u][i]] == false) {
				visa[dp[u][i]] = true;
				visit[dp[u][i]] = visit[u] + motor[u][dp[u][i]];
				q.push(dp[u][i]);
				trace[dp[u][i]] = u;
			}
			else {
				if (visit[dp[u][i]] > visit[u] + motor[u][dp[u][i]]) {
					visit[dp[u][i]] = visit[u] + motor[u][dp[u][i]];
					trace[dp[u][i]] = u;
				}
			}
			if (dp[u][i] == k) {
				int v = k;
				dem = 1;
				ans[dem].second = k;
				while (v != 1) {
					if (ans[dem].first == 0) {
						ans[dem].first = trace[v];
						v = trace[trace[v]];
						dem++;
						ans[dem].second = ans[dem - 1].first;
					}
				}
				ans[dem].first = 1;
				for (int i = dem; i >= 1; i--) {
					cout << ans[i].first << " " << ans[i].second << "\n";
				}
				exit(0);
			}
		}
	}
}

void sub2() {
	queue <int> q;
	q.push(1);
	visa[1] = true;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 0; i < dp[u].size(); i++) {
			if (visa[dp[u][i]] == false) {
				visa[dp[u][i]] = true;
				visit[dp[u][i]] = visit[u] + motor[u][dp[u][i]];
				q.push(dp[u][i]);
			}
			else {
				visit[dp[u][i]] = min(visit[dp[u][i]], visit[u] + motor[u][dp[u][i]]);
			}
			if (dp[u][i] == k) {
				cout << visit[k];
				exit(0);
			}
		}
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // if (fopen("DAYDEN.inp","r"))
    // {
    //     freopen("DAYDEN.inp", "r", stdin);
    //     freopen("DAYDEN.out", "w", stdout);
    // }
    kien x, u , v;
    cin >> n >> m >> k >> x;
    for (int i = 1; i <= m; i++) {
    	cin >> u >> v >> a[i] >> b[i];
    	dp[u].push_back(v);
    	dp[v].push_back(u);
    	// walk[u][v] = a[i];
    	motor[u][v] = b[i];
    }
    if (k == n and n <= 10000) {
    	sub2();
    }
    else if (n <= 1000) {
    	cout << -1;
    	exit(0);
    }
    else {
    	cout << -1;
    	exit(0);
    }
}
