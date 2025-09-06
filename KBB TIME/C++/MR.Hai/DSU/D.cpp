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
const int MXN = 200000 + 5; 
int u[MXN], v[MXN];
kien n, k, m, par[Million], vtr[Million];
kien l[MXN], r[MXN], sz[Million];
map<pair<int,int>, int> pp;

pair<int,int> normalize(int a, int b){
    if(a > b) swap(a,b);
    return {a,b};
}

void reset(int n) {
    for (int i = 1; i <= n; i++) {
        par[i] = i;
        sz[i] = 1;
    }
}

int find_set(int u) {
    if (u == par[u]) return u;
    return par[u] = find_set(par[u]);
}

void union_set(int u, int v) {
    u = find_set(u); v = find_set(v);
    if (u == v) return;
    if (sz[u] < sz[v]) swap(u ,v);
    sz[u] += sz[v];
    par[v] = u;
}

JAV(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        cin >> u[i] >> v[i];
    }

    vector<string> x(k+1);
    for (int i = 1; i <= k; i++) {
        cin >> x[i] >> l[i] >> r[i];
        if (x[i] == "ask") vtr[i] = 1;
        else {
            vtr[i] = 0;
            pp[normalize(l[i], r[i]) ] = 1; 
        }
    }
    reset(n);
    for (int i = 1; i <= m ; i++) {
        if (pp.count( normalize(u[i], v[i]) ) == 0) {
            union_set(u[i], v[i]);
        }
    }

    vector<string> ans;
    ans.reserve(k);
    for (int i = k; i >= 1; i--) {
        if (vtr[i] == 1) { 
            ans.push_back( find_set(l[i]) == find_set(r[i]) ? "YES" : "NO" );
        } else { 
            union_set(l[i], r[i]);
        }
    }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << '\n';
    }
    return 0;
}
