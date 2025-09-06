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
const int MAXN = 200000 + 5;
const int MAXB = 20;
int n, m, t;
int a[MAXN];
int st[4 * MAXN][MAXB];
int lazy[4 * MAXN];

void build(int id, int l, int r) {
    if (l == r) {
        for (int bit = 0; bit < MAXB; bit++) {
            st[id][bit] = ((a[l] >> bit) & 1);
        }
    } 
    else {
        int mid = (l + r) / 2;
        build(id * 2, l, mid);
        build(id * 2 + 1, mid + 1, r);
        for (int bit = 0; bit < MAXB; bit++) {
            st[id][bit] = st[id * 2][bit] + st[id * 2 + 1][bit];
        }
    }
}

void apply(int id, int dodai, int x) {
    for (int bit = 0; bit < MAXB; bit++) {
        if ((x >> bit) & 1) {
            st[id][bit] = dodai - st[id][bit];
        }
    }
    lazy[id] ^= x;
}

void push(int id, int l, int r) {
    if (lazy[id] and l < r) {
        int mid = (l + r) / 2;
        apply(id * 2, mid - l + 1, lazy[id]);
        apply(id * 2 + 1, r - mid, lazy[id]);
        lazy[id] = 0;
    }
}

void update(int id, int l, int r, int L, int R, int x) {
    if (R < l or r < L) return;
    if (L <= l and r <= R) {
        apply(id, r - l + 1, x);
        return;
    }
    push(id, l, r);
    int mid = (l + r) / 2;
    update(id * 2, l, mid, L, R, x);
    update(id * 2 + 1, mid + 1, r, L, R, x);
    for (int bit = 0; bit < MAXB; bit++) {
        st[id][bit] = st[id * 2][bit] + st[id * 2 + 1][bit];
    }
}

kien get(int id, int l, int r, int L, int R) {
    if (R < l or r < L) return 0;
    if (L <= l and r <= R) {
        kien tong = 0;
        for (int bit = 0; bit < MAXB; bit++) {
            tong += ((kien)st[id][bit] << bit);
        }
        return tong;
    }
    push(id, l, r);
    int mid = (l + r) / 2;
    return get(id * 2, l, mid, L, R) + get(id * 2 + 1, mid + 1, r, L, R);
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    build(1, 1, n);
    cin >> m;
    while (m--) {
        cin >> t;
        if (t == 1) {
            int L, R;
            cin >> L >> R;
            cout << get(1, 1, n, L, R) << "\n";
        } 
        else {
            int L, R, x;
            cin >> L >> R >> x;
            update(1, 1, n, L, R, x);
        }
    }
}
