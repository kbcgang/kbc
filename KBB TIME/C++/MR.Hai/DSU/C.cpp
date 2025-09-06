///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien par[Million + 5], n , m;
kien vtr, res, ans;

int find_set(int v) {
    if (par[v] == v) return v;
    par[v] = find_set(par[v]);
    return par[v];
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n + 1; i++) {
        par[i] = i;
    }
    for (int i = 0; i < m; i++) {
        char c;
        int x;
        cin >> c >> x;
        if (c == '-') {
            par[x] = find_set(x + 1);
        } 
        else if (c == '?') {
            res = find_set(x);
            if (res > n) {
                cout << -1 << '\n';
            } else {
                cout << res << '\n';
            }
        }
    }
}
