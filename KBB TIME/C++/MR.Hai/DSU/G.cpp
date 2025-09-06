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
kien n, k, m, dem, par[Million + 5], sz[1000000];
kien maxx, minn, nxt[Million], vtr, ans, l, r;
unordered_map <int, int> pp;

void reset(int n) {
	for (int i = 1; i <= n; i++) {
		par[i] = i;
		sz[i] = 0;
		nxt[i] = i;
	}
}
	
int find_set(int u) {
	return (par[u] == u ? u : par[u] = find_set(par[u]));
}

void union_set(int u, int v) {
	u = find_set(u);
	v = find_set(v);
	if (u == v) {
		return;
	}
	sz[v] += sz[u];
	par[u] = v; 
}

int vtr_next (int u) {
	if (u > n) return u;
	if (nxt[u] == u) {
		return u;
	}
	nxt[u] = vtr_next(nxt[u]);
	return nxt[u];
}

bool check(int u, int v) {
	return (find_set(u) == find_set(v));
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien q;
    cin >> n >> q;
    kien type, u, v;
    reset(n);
    for (int i = 1; i <= q; i++) {
    	cin >> type >> u >> v;
    	if (type == 1) {
    		union_set(u , v);
    	}
    	else if (type == 2) {
    		int tmp = vtr_next(u + 1);
    		while (tmp <= v) {
    			union_set(u, tmp);
    			nxt[tmp] = tmp + 1;
    			tmp = vtr_next(nxt[tmp]);
    		}
    	}
    	else {
    		if (check(u , v)) {
    			cout << "YES\n";
    		}
    		else {
    			cout << "NO\n";
    		}
    	}
    }
}
    