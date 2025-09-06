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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r;
vector <kien> dp[100005];
unordered_map <int, int> pp;

void dfs() {
    queue <int> q;
    q.push(1);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < dp[u].size(); i++) {
            if (pp[dp[u][i]] == 0) {
                q.push(dp[u][i]);
                f[dp[u][i]] = f[u] + 1;
            }
            pp[dp[u][i]]++;
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
    for (int i = 1; i < n; i++) {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }
    dfs();
    for (int i = 2; i <= n; i++) {
        cout << f[i] << "\n";
    }
        
}
