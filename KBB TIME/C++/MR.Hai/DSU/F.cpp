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
kien n, k, m, dem, par[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, sz[1000000];
unordered_map <kien, kien> pp;

void reset(int n) {
	for (int i = 1; i <= n; i++) {
		par[i] = i;
		sz[i] = 1;
	}
}

int find_set(int u) {
	return (u == par[u] ? u : par[u] = find_set(par[u]));
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

void solve() {
	for (int i = 1; i <= n; i++) {
    	if (pp[a[i]] == 0) {
    		pp[a[i]]++;
    		cout << a[i] << " ";
    		if (a[i] + 1 <= n and pp[a[i] + 1] > 0) {
    			union_set(a[i], a[i] + 1);
    		}
    		if (a[i] - 1 >= 1 and pp[a[i] - 1] > 0) {
    			union_set(a[i] - 1, a[i]);
    		}
    	}
    	else {
    		vtr = find_set(a[i]);
    		vtr++;
    		if (vtr > n) {
    			vtr = find_set(1);
    			if (pp[vtr] == 1) {
    				vtr++;
    			}
    		}
    		cout << vtr << " "; 
    		pp[vtr]++;
    		if (pp[vtr + 1] > 0) {
    			union_set(vtr, vtr + 1);
    		}
    		if (pp[vtr - 1] > 0) {
    			union_set(vtr - 1, vtr);
    		}
    	}
    }
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    reset(n);
    pp[1] = 0;
    solve();
}
    