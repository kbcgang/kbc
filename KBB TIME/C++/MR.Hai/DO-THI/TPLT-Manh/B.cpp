/// Hãy làm Sư tử, đừng làm Nai.
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
const int MAXN = 100000 + 5;
kien n, m, low[MAXN], num[MAXN];
vector<int> dp[MAXN];
stack<int> st;
bool visa[MAXN];
kien f[MAXN], dem;

void dfs(int u) {
    st.push(u);
    visa[u] = true;
    low[u] = num[u] = ++num[0];
    for (int v : dp[u]) {
        if (num[v] == MOD) 
        	continue; 
        if (num[v] == 0) {
            dfs(v);
            low[u] = min(low[u], low[v]);
        } 
        else {
            low[u] = min(low[u], num[v]);
        }
    }
    if (low[u] == num[u]) {
        ++dem;
        while (1) {
            int v = st.top();
            st.pop();
            visa[v] = false;
            num[v] = MOD;  
            f[v] = dem;
            if (v == u) break;
        }
    }
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        dp[i].clear();
        num[i] = 0;
        low[i] = 0;
        visa[i] = false;
        f[i] = 0;
    }
    num[0] = 0;
    dem = 0;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        dp[u].push_back(v);
    }
    for (int i = 1; i <= n; ++i) {
        if (num[i] == 0) {
        	dfs(i);
        }
    }
    if (dem == 0) {
        cout << 0 << '\n';
        exit(0);
    }
    vector<kien> vec(dem + 1, 0);
    for (int u = 1; u <= n; ++u) {
        for (int v : dp[u]) {
            if (f[u] != f[v]) vec[ f[v] ]++;
        }
    }
    kien ans = 0;
    for (int i = 1; i <= dem; ++i) 
    	if (vec[i] == 0) ++ans;
    cout << ans << '\n';
}
