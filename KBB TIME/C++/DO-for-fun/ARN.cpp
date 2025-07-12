///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, st[4 * 100000 + 5];
pair<int, int> a[100005];

void update(int id, int l, int r, int i) {
    if (r < i || i < l) return;
    if (l == r) {
        st[id]++;
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, i);
    update(id * 2 + 1, mid + 1, r, i);
    st[id] = st[id * 2] + st[id * 2 + 1];
}

kien get(int id, int l, int r, int u, int v) {
    if (r < u || v < l) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r) / 2;
    return get(id * 2, l, mid, u, v) + get(id * 2 + 1, mid + 1, r, u, v);
}

kien dem(kien dist) {
    int d = 1;
    kien res = 0;
    for (int i = 1; i <= n; i++) {
        while (a[i].first - a[d].first > dist) {
            update(1, 1, 100000, a[d].second);
            d++;
        }
        res += (i - d) + get(1, 1, 100000, max(1, a[i].second - (int)dist), min(100000, a[i].second + (int)dist));
    }
    return res;
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        a[i] = {x, y};
    }
    sort(a + 1, a + 1 + n);
    int l = 0, r = 100000, mid;
    while (l <= r) {
        memset(st, 0, sizeof st);  
        mid = (l + r) / 2;
        if (dem(mid) >= k)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << l << '\n';
}
