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
kien maxx, minn, vtr, ans, l, r, dp[1000000];
const int MXN = 1e5;
kien st[4 * MXN], lazy[4 * MXN];

void build (int id, int l, int r) {
    lazy[id] = 1;
    if (l == r) {
        st[id] = a[l];
    }
    else {
        int mid = (l + r) >> 1;
        build (id << 1, l , mid);
        build (id << 1 | 1, mid + 1, r);
        st[id] = (st[id << 1] + st[id << 1 | 1]) % MOD;
    }
}

void nhan(int id, int val) {
    st[id] = (st[id] * val) % MOD;
    lazy[id] = (lazy[id] * val) % MOD;
}

void push(int id, int l, int r) {
    if (l == r) return;
    if (lazy[id] != 1) {
        int mid = (l + r) >> 1;
        nhan (id << 1, lazy[id]);
        nhan (id << 1 | 1, lazy[id]);
        lazy[id] = 1;
    }
}

void update (int id , int l , int r, int u, int v, int val) {
    if (u > r or v < l) return;
    if (u <= l and r <= v) {
        st[id] = (st[id] * val) % MOD;
        lazy[id] = (lazy[id] * val) % MOD;
        return;
    }
    push(id, l, r);
    int mid = (l + r) >> 1;
    update (id << 1, l , mid, u , v, val);
    update (id << 1 | 1, mid + 1, r, u , v, val);
    st[id] = (st[id << 1] + st[id << 1 | 1]) % MOD;
}

kien get(int id, int l, int r, int u, int v) {
    if (u > r or v < l) return 0;
    if (u <= l and r <= v) {
        return st[id];
    }
    push(id, l, r);
    int mid = (l + r) >> 1;
    kien res = 0;
    res = get(id << 1, l, mid, u , v) + get(id << 1 | 1, mid + 1, r, u , v);
    return res;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build (1, 1, n);
    kien t, w;
    while (q--) {
        cin >> t >> l >> r;
        if (t == 1) {
            cin >> w;
            update (1 , 1 , n, l ,r,w);
        }
        else {
            ans = get(1, 1, n, l , r);
            cout << ans << "\n";
        }
    }
    
}
