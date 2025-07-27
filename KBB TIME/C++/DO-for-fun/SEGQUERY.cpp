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
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;
const int MAXN = 1000005;
kien st[4 * MAXN], them[4 * MAXN], lazy[4 * MAXN];

void build (int id, int l, int r) {
    lazy[id] = 1;
    them[id] = 0;
    if (l == r) {
        st[id] = 0;
    }
    else {
        int mid = (l + r) >> 1;
        build (id << 1, l, mid);
        build (id << 1 | 1, mid + 1, r);
        st[id] = (st[id << 1] + st[id << 1 | 1]) % MOD;
    }
}

void nhan (int id, int l ,int r, int val) {
    st[id] = st[id] * val % MOD;
    lazy[id] = lazy[id] * val % MOD;
    them[id] = them[id] * val % MOD;
}

void cong(int id, int l, int r, int val) {
    kien len = (r - l + 1);
    st[id] = (st[id] + val * len) % MOD;
    them[id] = (them[id] + val) % MOD;
}

void push(int id, int l , int r) {
    if (l == r) return;
    if (lazy[id] != 1) {
        int mid = (l + r) >> 1;
        nhan (id << 1, l , mid, lazy[id]);
        nhan (id << 1 | 1, mid + 1 , r, lazy[id]);
        lazy[id] = 1;
    }
    if (them[id] != 0) {
        int mid = (l + r) >> 1;
        cong (id << 1, l , mid, them[id]);
        cong (id << 1 | 1, mid + 1, r, them[id]);
        them[id] = 0;
    }
}

void update (int id, int l, int r, int u, int v, int val, int t) {
    if (u <= l and r <= v) {
        if (t == 1) {
            cong (id, l, r , val);
        }
        else {
            nhan (id, l, r, val);
        }
        return;
    }
    push(id, l , r);
    int mid = (l + r) >> 1;
    if (u <= mid) update (id << 1, l , mid, u , v, val, t);
    if (mid < v) update (id << 1 | 1, mid + 1, r, u ,v, val, t);
    st[id] = (st[id << 1] + st[id << 1 | 1]) % MOD;
}

kien get(int id, int l, int r, int u, int v) {
    if (u <= l and r <= v) {
        return st[id];
    }
    push(id, l ,r);
    int mid = (l + r) >> 1;
    kien res = 0;
    if (u <= mid) res += get(id << 1, l , mid, u , v) % MOD;
    if (mid < v) res += get(id << 1 | 1, mid + 1, r , u ,v) % MOD;
    return res;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien q;
    cin >> n >> q;
    build (1, 1, n);
    kien t, l , r, w;
    while (q--) {
        cin >> t >> l >> r;
        if (t == 1) {
            cin >> w;
            update (1 , 1 , n, l , r, w, t);
        }
        else if (t == 2) {
            cin >> w;
            update (1 ,1 , n, l , r, w, t);
        }
        else {
            ans = get(1, 1,  n, l , r);
            ans %= MOD;
            cout << ans << "\n";
        }
    }
}
