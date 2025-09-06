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
const int MAXN = 1000005;
kien a[MAXN], n, f[MAXN];
kien par[MAXN], sz[MAXN];
bool ktr[MAXN];
kien ans[MAXN];

int find_set(int u) {
    while (par[u] != u) {
        par[u] = par[par[u]];
        u = par[u];
    }
    return u;
}

void union_set(int u, int v) {
    u = find_set(u);
    v = find_set(v);
    if (u == v) {
        return;
    }
    par[v] = u;
    sz[u] += sz[v];
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> f[i];
    }

    for (int i = 1; i <= n; i++) {
        par[i] = i;
        sz[i] = 0;
        ktr[i] = false;
    }
    ans[n] = 0; 
    kien res = 0;
    for (int t = n; t >= 1; t--) {
        int pos = f[t];
        ktr[pos] = true;
        par[pos] = pos;
        sz[pos] = a[pos];
        if (pos > 1 and ktr[pos - 1]) {
            union_set(pos, pos - 1);
        }
        if (pos < n and ktr[pos + 1]) {
            union_set(pos, pos + 1);
        }
        res = max(res, sz[find_set(pos)]);
        ans[t - 1] = res; 
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << "\n";
    }
}
