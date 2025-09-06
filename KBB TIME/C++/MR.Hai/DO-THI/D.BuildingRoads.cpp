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
int f[Million], a[Million], vtr[Million], dem, n, m, u , v;
bool visa[Million];
int ans[Million];
int q[Million];

void bfs(int s) {
    int l = 0, r = 0;
    q[r++] = s;
    visa[s] = true;
    while (l < r) {
        int u = q[l++];
        for (int e = f[u]; e != -1; e = vtr[e]) {
            int v = a[e];
            if (!visa[v]) {
                visa[v] = true;
                q[r++] = v;
            }
        }
    }
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        f[i] = -1;
        visa[i] = false;
    }
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        a[dem] = v; 
        vtr[dem] = f[u]; 
        f[u] = dem++;
        a[dem] = u; 
        vtr[dem] = f[v]; 
        f[v] = dem++;
    }
    int minn = 0;
    for (int i = 1; i <= n; i++) {
        if (visa[i] == false) {
            ans[minn++] = i; 
            bfs(i);            
        }
    }
    cout << minn - 1 << "\n";
    for (int i = 0; i < minn - 1; i++) {
        cout << ans[i] << " " << ans[i + 1] << "\n";
    }
}

