/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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
kien n, k, m, dem, num[Million + 5], low[1000000];
kien maxx, minn, cau, vtr, ans, size1, size2;
vector <int> dp[Million];
vector <int> f;

kien dfs(int u, int pa) {
	num[u] = ++dem;
	low[u] = num[u];
	int size = 1;
	for (int v : dp[u]) {
		if (v == pa) {
			continue;
		}
		if (num[v] == 0) {
			int tmp = dfs(v, u);
			size += tmp;
			if (low[v] > num[u]) {
				cau++;
				f.push_back(tmp);
			}
			low[u] = min(low[u], low[v]);
		}
		else {
			low[u] = min(low[u], num[v]);
		}
	}
	return size;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    kien u , v;
    for (int i = 1; i <= m; i++) {
    	cin >> u >> v;
    	dp[u].push_back(v);
    	dp[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
    	if (num[i] == 0) {
    		maxx++;
    		int size = dfs(i, 0);
    		if (maxx == 1) size1 = size;
    		else if (maxx == 2) size2 = size;
    	}
    }
    kien add = n * (n - 1 ) / 2 - m;
    kien canh = m - cau;
    if (maxx > 2 ) {cout << 0 << "\n"; exit(0);}
    if (maxx == 1) {
    	ans = (canh * add);
    	for (auto a : f) {
    		ans += (a * (n - a) - 1);
    	}
    	cout << ans;
    	exit(0);
    }
    else if (maxx == 2) {
    	ans = canh * (size1 * size2);
    	cout << ans;
    }
}
