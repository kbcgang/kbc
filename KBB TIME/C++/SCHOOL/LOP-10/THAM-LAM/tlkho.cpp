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
kien n, k, m, dem, w, a[1000000];
kien maxx, minn, vtr, ans, l, r, st[1000000];

void build (int id, int l, int r) {
    if (l == r) {
        st[id] = w;
        return;
    }
    int mid = (l + r) >> 1;
    build (id << 1, l , mid);
    build (id << 1 | 1, mid + 1, r);
    st[id] = max(st[id << 1], st[id << 1 | 1]);
}

int get(int id, int l, int r, kien val) {
    if (l == r) {
        st[id] -= val;
        return l;
    }
    int mid = (l + r) >> 1;
    int res = -1;
    if (st[id << 1] >= val) {
        res = get (id << 1, l , mid, val);
    }
    else {
        res = get(id << 1 | 1, mid + 1, r, val);
    }
    st[id] = max(st[id<<1], st[id << 1 | 1]);
    return res;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> w >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, m);
    for (int i = 1 ; i<= n; i++) {
        if (st[1] < a[i]) {
            cout << -1 << "\n";
        }
        else {
            cout << get(1, 1, m, a[i]) << "\n";
        }
    }
    
}
