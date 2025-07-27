/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
kien n, k, m;
kien maxx, minn, vtr, ans, st[400005];
pair <int , int > a[100005];

void build (int id, int l, int r) {
    st[id] = 0;
    if (l == r) return;
    int mid = (l + r) >> 1;
    build (id << 1, l , mid);
    build (id << 1 | 1, mid + 1, r);
}

void update (int id, int l, int r, int i) {
    if (r < i or i < l) {
        return;
    }
    if (l == i and i == r) {
        st[id]++;
        return;
    }
    int mid = (l + r) >> 1;
    update (id * 2, l ,mid, i);
    update (id * 2 + 1, mid + 1, r, i);
    st[id] = st[id << 1] + st[id << 1 | 1];
}

int get(int id, int l, int r, int u, int v) {
    if (r < u or v < l) {
        return 0;
    }
    if (u <= l and r <= v) {
        return st[id];
    }
    int mid = (l + r) >> 1;
    return (get(id << 1, l , mid, u , v) + get(id << 1 | 1, mid + 1, r, u , v));
}

kien dem (kien dist) {
    int d = 1;
    kien ans = 0;
    for (int i = 1; i <= n; i++) {
        while (a[i].first - a[d].first > dist) {
            update (1 ,1 , 1e5, a[d].second);
            d++;
        }
        if (a[i].first - a[d].first <= dist) 
            ans += (i - d) + get(1 ,1 , 1e5, a[i].second - dist, a[i].second + dist);
    }
    return ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort (a + 1, a + 1 + n );
    int l = 0, r = 100000, mid;
    while (l <= r) {
        build (1 ,1 , 1e5);
        mid = (l + r) >> 1;
        if (dem(mid) >= k) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << l;
}
