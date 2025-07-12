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
kien n, m;
kien a[200005];
kien st[4 * 200005], lazy[4 * 200005];

void build(int id, int l, int r) {
    if (l == r) {
        st[id] = a[l];
    } else {
        int mid = (l + r) / 2;
        build(id * 2, l, mid);
        build(id * 2 + 1, mid + 1, r);
        st[id] = min(st[id * 2], st[id * 2 + 1]);
    }
}

void push(int id, int l, int r) {
    if (lazy[id] != 0) {
        st[id] += lazy[id];
        if (l != r) {
            lazy[id * 2] += lazy[id];
            lazy[id * 2 + 1] += lazy[id];
        }
        lazy[id] = 0;
    }
}

void update(int id, int l, int r, int u, int v, kien val) {
    push(id, l, r);
    if (r < u || v < l) return;
    if (u <= l && r <= v) {
        lazy[id] += val;
        push(id, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, u, v, val);
    update(id * 2 + 1, mid + 1, r, u, v, val);
    st[id] = min(st[id * 2], st[id * 2 + 1]);
}

kien get_min(int id, int l, int r, int u, int v) {
    push(id, l, r);
    if (r < u || v < l) return LLONG_MAX;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r) / 2;
    return min(get_min(id * 2, l, mid, u, v),
               get_min(id * 2 + 1, mid + 1, r, u, v));
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    build(1, 0, n - 1);
    cin >> m;
    string s;
    getline(cin, s);  
    while (m--) {
        getline(cin, s);
        stringstream ss(s);
        vector<kien> tmp;
        kien x;
        while (ss >> x) tmp.push_back(x);

        if (tmp.size() == 2) {
            int lf = tmp[0];
            int rg = tmp[1];
            kien ans = LLONG_MAX;
            if (lf <= rg) {
                ans = get_min(1, 0, n - 1, lf, rg);
            } else {
                ans = min(get_min(1, 0, n - 1, lf, n - 1),
                          get_min(1, 0, n - 1, 0, rg));
            }
            cout << ans << "\n";
        } else {
            int lf = tmp[0];
            int rg = tmp[1];
            kien val = tmp[2];
            if (lf <= rg) {
                update(1, 0, n - 1, lf, rg, val);
            } else {
                update(1, 0, n - 1, lf, n - 1, val);
                update(1, 0, n - 1, 0, rg, val);
            }
        }
    }

    return 0;
}