/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, st[1000000];

void build (int id, int l, int r) {
    if (l == r) {
        st[id] = a[l];
    }
    else {
        int mid = (l + r) / 2;
        build (id * 2, l ,mid);
        build (id * 2 + 1, mid + 1, r );
        st[id] = st[id * 2] + st[id * 2 + 1];
    }
}

void update (int id , int l, int r, int pos, int val) {
     if (l == r) {
         st[id] = val;
         return;
     }
     int mid = (l + r) / 2;
     if (pos <= mid) update (id * 2, l , mid, pos, val);
     else update (id * 2 + 1, mid + 1, r , pos , val);
     st[id] = st[id * 2] + st[id * 2 + 1]; 
}

int get (int id , int l , int r, int u, int v) {
    if (v < l or r < u) return 0;
    if (u <= l and r <= v) return st[id];
    int mid = (l + r) / 2;
    return get(id * 2, l, mid, u , v) + get(id * 2 + 1 , mid + 1 , r , u , v);
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
    build (1 ,1 , n);
    int t, x, y;
    while (q--) {
        cin >> t >> x >> y;
        if (t == 1) {
            update (1, 1 , n , x , y);
        }
        if (t == 2) {
            cout << get(1 , 1 ,n  , x , y) << "\n";
        }
    }   
}
