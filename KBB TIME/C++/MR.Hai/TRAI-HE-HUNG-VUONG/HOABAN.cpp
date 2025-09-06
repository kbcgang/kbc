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
const int MAXN = 100005;
kien n, Q, B, vtr, minn, maxx, a[Million], shit, v;
kien st[4*MAXN], lazy[4*MAXN], sum, need1, rem, d;

void build(int id, int l, int r) {
    lazy[id] = 0;
    if (l == r) {
        st[id] = B;
        return;
    }
    int mid = (l + r) >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
    st[id] = st[id << 1] + st[id << 1 | 1];
}

void push(int id, int l, int r) {
    if (lazy[id] != 0) {
        int mid = (l + r) >> 1;
        st[id << 1] = lazy[id] * (mid - l + 1);
        st[id << 1 | 1] = lazy[id] * (r - mid);
        lazy[id << 1] = lazy[id];
        lazy[id << 1 | 1] = lazy[id];
        lazy[id] = 0;
    }
}

void update(int id, int l, int r, int u, int v, kien val) {
    if (r < u or v < l) {
        return;
    }
    if (u <= l and r <= v) {
        st[id] = val * (r - l + 1);
        lazy[id] = val;
        return;
    }
    push(id, l, r);
    int mid = (l + r) >> 1;
    update(id << 1,l, mid, u, v, val);
    update(id << 1 | 1, mid + 1, r, u, v, val);
    st[id] = st[id << 1] + st[id << 1 | 1];
}

kien get(int id, int l, int r, int u, int v) {
    if (r < u or v < l) {
        return 0;
    }
    if (u <= l and r <= v) {
        return st[id];
    }
    push(id, l, r);
    int mid = (l + r) >> 1;
    kien L = get(id << 1, l, mid, u, v);
    kien R = get(id << 1 | 1, mid + 1, r, u, v);
    return L + R;
}

bool ktr(int mid, int v, kien shit) {
    int len = v - mid + 1;
    kien sum = get(1, 1, n, mid, v);
    kien need1 = a[mid] * len - sum;
    if (shit < need1) {
        return false;
    }
    return true;
}

int tknp(int v, kien shit) {
    int l = 1, r = v, kq = v;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (ktr(mid, v, shit)) {
            kq = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return kq;
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> Q >> B;
    build(1, 1, n);
    for (int i = 1; i <= n; i++) {
        a[i] = B;
    }
    for (int j = 1; j <= Q; j++) {
        cin >> v >> shit;
        int mid = tknp(v, shit);
        int len = v - mid + 1;
        kien sum = get(1, 1, n, mid, v);
        need1 = a[mid] * len - sum;
        rem = shit - need1;
        d = rem / len;
        int tang = (int)(rem % len);
        kien newH = a[mid] + d;
        update(1, 1, n, mid, v, newH);
        for (int i = mid; i <= v; i++) {
            a[i] = newH;
        }
        if (tang > 0) {
            update(1, 1, n, mid, mid + tang - 1, newH + 1);
            for (int i = mid; i <= mid + tang - 1; i = i + 1) {
                a[i] = newH + 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << get(1, 1, n, i, i) << " ";
    }
}

