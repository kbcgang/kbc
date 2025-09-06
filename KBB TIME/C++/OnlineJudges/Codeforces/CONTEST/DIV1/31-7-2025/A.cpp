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

const int MAXN = 3005;
int parent_[2*MAXN], rnk[2*MAXN];
int a[MAXN], b[MAXN], gg[MAXN];

int findp(int x) {
    if (parent_[x] != x) {
        parent_[x] = findp(parent_[x]);
    }
    return parent_[x];
}

void unite(int x, int y) {
    int px = findp(x);
    int py = findp(y);
    if (px == py) return;
    if (rnk[px] < rnk[py]) {
        parent_[px] = py;
    } else {
        parent_[py] = px;
        if (rnk[px] == rnk[py]) {
            rnk[px]++;
        }
    }
}

JAV() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i];
            gg[i] = i;
        }
        int maxCogg = 2*n + 2;
        for (int i = 1; i <= maxCogg; i++) {
            parent_[i] = i;
            rnk[i] = 0;
        }
        sort(gg+1, gg+n+1, [&](int i, int j){
            return (b[i] - a[i]) > (b[j] - a[j]);
        });
        vector<int> res;  
        for (int k = 1; k <= n; k++) {
            int i = gg[k];
            int u = a[i], v = b[i];
            if (findp(u) != findp(v)) {
                unite(u, v);
                res.push_back(i);
            }
        }
        cout << res.size() << "\n";
        sort(res.begin(), res.end());
        for (int idx : res) {
            cout << idx << " ";
        }
        cout << "\n";
    }
    return 0;
}

