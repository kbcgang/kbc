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
#define INF 1000000000000000000LL
kien n, k, m, dem, ans[Million + 5], a[1000000];
kien maxx, minn, vtr, l, r, dp[1000000];
kien lazy[Million], st[Million];

void build (int id, int l, int r) {
    lazy[id] = 0;
    if (l == r) {
        st[id] = a[l];
    }
    else {
        int mid = (l + r) >> 1;
        build (id << 1, l, mid);
        build (id << 1 | 1, mid + 1, r);
        st[id] = min(st[id << 1], st[id << 1 | 1]);
    }
}

void tru(int id, int val) {
    st[id] += val;
    lazy[id] += val;
}

void push (int id) {
    if (lazy[id] != 0) {
        tru(id << 1, lazy[id]);
        tru(id << 1 | 1, lazy[id]);
        lazy[id] = 0;
    }
}

void update (int id, int l, int r, int u, int v, int val) {
    if (u <= l and r <= v) {
        tru(id, val);
    }
    else {
        push(id);
        int mid = (l + r) >> 1;
        if (u <= mid) update (id << 1, l, mid, u, v, val);
        if (mid < r) update (id << 1 | 1, mid + 1, r, u , v, val);
        st[id] = min(st[id << 1], st[id << 1 | 1]);
    }
}

int get (int id, int l, int r) {
    if (st[id] > 0) return -1;
    if (l == r) {
        return l;
    }
    push(id);
    int mid = (l + r) >> 1;
    int res = get (id << 1, l , mid);
    if (res != -1) return res;
    return get (id << 1 | 1, mid + 1, r);
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) ans[i] = -1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    kien q;
    build (1, 1 , n);
    kien s;
    for (int i = 1; i <= m; i++) {
        cin >> l >> r >> s;
        update (1, 1 , n, l, r, -s);
        int pos = get (1, 1, n);
        while (pos != -1) {
            ans[pos] = i;
            update (1, 1 , n, pos, pos, INF);
            pos = get(1 ,1 , n);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (ans[i] == -1) cout << -1;
        else cout << ans[i];
        if (i < n) cout << " ";
    }
    cout << '\n';
}
