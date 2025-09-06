/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define int long long 
#define JAV main
#define MOD 1000000007
const int MAXN = 100005;
kien n, m, u, v;
vector<int> dp[MAXN];
kien k[MAXN], f[MAXN], tong[MAXN], num[MAXN], low[MAXN]; 
stack<int> st;   
int dem = 0;       

void dfs(int u) {
    st.push(u);
    num[u] = low[u] = ++num[0];
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
        tong[dem] = 0;
        while (1) {
            int v = st.top(); 
            st.pop();
            num[v] = MOD;
            f[v] = dem;
            tong[dem] += k[v];
            if (v == u) break;
        }
    }
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> k[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        dp[u].push_back(v);
    }
    for (int i = 1; i <= n; ++i) {
        if (num[i] == 0) dfs(i);
    }

    if (dem == 0) {
        cout << 0 << '\n';
        return 0;
    }
    vector<vector<int>> vec(dem + 1);
    vector<int> chiso(dem + 1, 0);
    for (int u = 1; u <= n; ++u) {
        for (int v : dp[u]) {
            if (f[u] != f[v]) {
                vec[f[u]].push_back(f[v]);
            }
        }
    }
    for (int i = 1; i <= dem; ++i) {
        sort(vec[i].begin(), vec[i].end());
        vec[i].erase(unique(vec[i].begin(), vec[i].end()), vec[i].end());
        for (int v : vec[i]) 
        	chiso[v]++;
    }
    vector<kien> coin(dem + 1, 0);
    queue<int> q;
    for (int i = 1; i <= dem; ++i) {
        coin[i] = tong[i]; 
        if (chiso[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        int u = q.front(); 
        q.pop();
        for (int v : vec[u]) {
            if (coin[u] + tong[v] > coin[v]) coin[v] = coin[u] + tong[v];
            chiso[v]--;
            if (chiso[v] == 0) q.push(v);
        }
    }
    kien ans = 0;
    for (int i = 1; i <= dem; ++i) 
    	if (coin[i] > ans) 
            ans = coin[i];
    cout << ans << '\n';
}
