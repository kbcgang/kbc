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
const kien MOD = 1000000007;
int N, Q;
vector<kien> a;
vector<kien> st, lazy;

void build(int p, int l, int r) {
    lazy[p] = 1;
    if (l == r) {
        st[p] = a[l] % MOD;
    } else {
        int m = (l + r) >> 1;
        build(p<<1, l, m);
        build(p<<1|1, m+1, r);
        st[p] = (st[p<<1] + st[p<<1|1]) % MOD;
    }
}

void apply_mul(int p, int l, int r, kien val) {
    st[p] = st[p] * val % MOD;
    lazy[p] = lazy[p] * val % MOD;
}

void push(int p, int l, int r) {
    if (lazy[p] != 1) {
        int m = (l + r) >> 1;
        apply_mul(p<<1,   l,   m, lazy[p]);
        apply_mul(p<<1|1, m+1, r, lazy[p]);
        lazy[p] = 1;
    }
}

void update_mul(int p, int l, int r, int i, int j, kien val) {
    if (i > r || j < l) return;
    if (i <= l && r <= j) {
        apply_mul(p, l, r, val);
        return;
    }
    push(p, l, r);
    int m = (l + r) >> 1;
    update_mul(p<<1,   l,   m, i, j, val);
    update_mul(p<<1|1, m+1, r, i, j, val);
    st[p] = (st[p<<1] + st[p<<1|1]) % MOD;
}

kien query_sum(int p, int l, int r, int i, int j) {
    if (i > r || j < l) return 0;
    if (i <= l && r <= j) {
        return st[p];
    }
    push(p, l, r);
    int m = (l + r) >> 1;
    return ( query_sum(p<<1,   l,   m, i, j)
           + query_sum(p<<1|1, m+1, r, i, j)
           ) % MOD;
}

JAV(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> Q;
    a.assign(N+1, 0);
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    st.assign(4*(N+1), 0);
    lazy.assign(4*(N+1), 1);
    build(1, 1, N);
    while (Q--) {
        int type, L, R;
        cin >> type >> L >> R;
        if (type == 1) {
            kien W;
            cin >> W;
            update_mul(1, 1, N, L, R, W % MOD);
        } else {
            kien ans = query_sum(1, 1, N, L, R);
            cout << ans << "\n";
        }
    }

    return 0;
}
