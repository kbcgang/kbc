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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien minn, vtr, ans, dp[1000000];

struct KBB {
    kien maxx, lazy; 
};
KBB st[4 * Million];

void push_down (int id, int l, int r) {
    int left = id * 2, right = id * 2 + 1;

    st[left].lazy += st[id].lazy;
    st[right].lazy += st[id].lazy;

    st[left].maxx += st[id].lazy;
    st[right].maxx += st[id].lazy;

    st[id].lazy = 0;
}

void update (int id , int l, int r, int u, int v, int val) {
    if (v < l or r < u) return;
    if (u <= l and r <= v) {
        st[id].lazy += val;
        st[id].maxx += val;
        return;
    }

    push_down (id, l , r);

    int mid = (l + r) / 2;
    update (id * 2, l, mid, u , v, val);
    update (id * 2 + 1, mid + 1, r , u , v, val);
    st[id].maxx = max(st[id * 2].maxx, st[id * 2 + 1].maxx);
}

kien get (int id, int l, int r, int u, int v) {
    if (v < l or u > r) return INT_MIN;
    if (u <= l and r <= v) {
        return st[id].maxx;
    }

    push_down (id, l , r);

    int mid = (l + r) / 2;
    return max(get(id * 2, l , mid, u , v), get(id * 2 + 1, mid + 1, r, u , v));
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        update (1 ,1, n, i , i, a[i]);
    }
    kien q;
    cin >> q;
    kien t, x , y, val;
    while (q--) {
        cin >> t >> x >> y;
        if (t == 1) {
            cin >> val;
            update (1 ,1, n , x , y , val);
        }
        else {
            cout << get(1, 1 , n, x , y) << "\n";
        }
    }
    
}
