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
kien maxx, minn, vtr, l, r;

struct KBB {
    kien val, cnt;
};
KBB st[Million];

void build (int id, int l , int r) {
    if (l == r) {
        st[id].val = a[l];
        st[id].cnt = 1;
    }
    else {
        int mid = (l + r) / 2;
        build (id * 2, l, mid );
        build (id * 2 + 1 , mid + 1, r);
        KBB left = st[id * 2];
        KBB right = st[id * 2 + 1];
        if (left.val < right.val) {
            st[id] = left;
        }
        else if (left.val > right.val) {
            st[id] = right;
        }
        else {
            st[id] = {left.val, left.cnt + right.cnt};
        }
    }
}

void update (int id, int l , int r , int pos, int val) {
    if (l == r) {
        a[l] = val;
        st[id] = {val, 1};
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) update (id * 2, l , mid, pos, val);
    else update (id * 2 + 1, mid + 1 , r, pos , val);
    KBB left = st[id * 2];
    KBB right = st[id * 2 + 1];
    if (left.val < right.val) {
        st[id] = left;
    }
    else if (left.val > right.val) {
        st[id] = right;
    }
    else {
        st[id] = {left.val, left.cnt + right.cnt};
    }
}

KBB get (int id, int l , int r, int u, int v) {
    if (v < l or r < u) {
        return {INT_MAX, 0};
    }
    if (u <= l and r <= v) {
        return st[id];
    }
    int mid = (l + r) / 2;
    KBB left = get(id * 2, l, mid, u , v);
    KBB right = get(id * 2 + 1, mid + 1, r, u , v);
    if (left.val < right.val) return left;
    else if (left.val > right.val) return right;
    else {
        return {left.val, left.cnt + right.cnt};
    }
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
    build (1 ,1 ,n);
    int t, x, y;
    while (q--) {
        cin >> t >> x >> y;
        if (t == 1) {
            update (1, 1 , n, x , y);
        }
        else {
            KBB ans = get(1 ,1 , n, x , y);
            cout << ans.val << " " << ans.cnt << "\n";
        }
    }

}
