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
const kien BASE = 257; 
kien n, m, t, pos, a, b;
char s[MAXN], c;
kien pow1[MAXN], st[4*MAXN], strev[4*MAXN];
int stlen[4*MAXN];

void build(int id, int l, int r) {
    stlen[id] = r - l + 1;
    if (l == r) {
        int val = (s[l] - 'a' + 1);
        st[id] = val % MOD;
        strev[id] = val % MOD;
        return;
    }
    int mid = (l + r) >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
    int L = id << 1;
    int R = id << 1 | 1;
    st[id] = (((st[L] * pow1[ stlen[R]]) % MOD) + st[R]) % MOD;
    strev[id] = (((strev[R] * pow1[stlen[L]]) % MOD) + strev[L]) % MOD;
}

void update(int id, int l, int r, int pos, char ch) {
    if (l == r) {
        int val = (ch - 'a' + 1);
        st[id] = val % MOD;
        strev[id] = val % MOD;
        return;
    }
    int mid = (l + r) >> 1;
    if (pos <= mid) update(id << 1, l, mid, pos, ch);
    else update(id << 1 | 1, mid + 1, r, pos, ch);
    int L = id << 1;
    int R = id << 1 | 1;
    st[id] = (((st[L] * pow1[stlen[R]]) % MOD) + st[R]) % MOD;
    strev[id] = (((strev[R] * pow1[ stlen[L]]) % MOD) + strev[L] ) % MOD;
}

struct KBB {
    kien f, r;
    int len;
};

KBB get(int id, int l, int r, int u, int v) {
    if (u <= l and r <= v) {
        KBB res;
        res.f = st[id];
        res.r = strev[id];
        res.len = stlen[id];
        return res;
    }
    int mid = (l + r) >> 1;
    if (v <= mid) return get(id << 1, l, mid, u, v);
    if (u > mid) return get(id << 1 | 1, mid + 1, r, u, v);
    KBB L = get(id << 1, l, mid, u, v);
    KBB R = get(id << 1 | 1, mid+1, r, u, v);
    KBB res;
    res.len = L.len + R.len;
    res.f = (((L.f * pow1[R.len]) % MOD ) + R.f) % MOD;
    res.r = (((R.r * pow1[L.len]) % MOD ) + L.r) % MOD;
    return res;
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    string rev;
    cin >> rev;
    for (int i = 1; i <= n; ++i) {
    	s[i] = rev[i-1];
    }
    pow1[0] = 1;
    for (int i = 1; i <= n; ++i) {
        pow1[i] = ( (pow1[i-1] * (BASE % MOD)) % MOD );
    }
    build(1, 1, n);
    while (m--) {
        cin >> t;
        if (t == 1) {
            cin >> pos >> c;
            update(1, 1, n, pos, c);
        } 
        else {
            cin >> a >> b;
            KBB res = get(1, 1, n, a, b);
            if (res.f == res.r) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}
