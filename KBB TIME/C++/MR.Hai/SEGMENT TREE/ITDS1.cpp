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
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans, l, r;
multiset <int> st[Million];

void build (int id, int l, int r) {
    if (l == r) {
        st[id].insert(a[l]);
        return;
    }
    int mid = (l + r) / 2;
    build (id * 2, l, mid);
    build (id * 2 + 1, mid + 1, r);
    st[id] = st[id * 2 + 1];
    for (auto x : st[id * 2]) {
        st[id].insert(x);
    }
}

void update(int id, int l, int r, int pos, int old, int val) {
    auto it = st[id].find((int)old);
    if (it != st[id].end()) st[id].erase(it);
    st[id].insert((int)val);
    if (l == r) {
        a[pos] = val;
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) {
        update(id * 2, l, mid, pos, old, val);
    } else {
        update(id * 2 + 1, mid + 1, r, pos, old, val);
    }
}

int get (int id, int l , int r, int u, int v, int k) {
    if (r < u or v < l) {
        return MOD;
    }
    if (u <= l and r <= v) {
        auto tknp = st[id].lower_bound(k);
        if (tknp == st[id].end()) return MOD;
        return *tknp;
    }
    int mid = (l + r) / 2;
    int get1 = get(id * 2, l, mid, u , v , k);
    int get2 = get(id * 2 + 1, mid + 1, r, u , v, k);
    return min(get1, get2);
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
    build (1 , 1 , n);
    kien t, x , y, dau, cuoi, k;
    while (q--) {
        cin >> t;
        if (t == 1) {
            cin >> x >> y;      
            update (1 , 1, n, x, a[x] , y);
        }
        else {
            cin >> dau >> cuoi >> k;
            ans = get(1 ,1 , n, dau, cuoi, k);
            if (ans == MOD) {
                cout << -1 << "\n";
            }
            else {
                cout << ans << '\n';
            }
        }
    }
}
