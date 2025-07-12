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

void update(int id, int l, int r, int idx) {
    if (l == r) {
        st[id]++;
        return;
    }
    int mid = (l + r) / 2;
    if (idx <= mid) update(id * 2, l, mid, idx);
    else update(id * 2 + 1, mid + 1, r, idx);
    st[id] = st[id * 2] + st[id * 2 + 1];
}

int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r) / 2;
    return get(id * 2, l, mid, u, v) + get(id * 2 + 1, mid + 1, r, u, v);
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    for (int i = n; i >= 1; i--) {
    	if (a[i] > 1)
            ans += get(1, 1, 60005 - 1, 1, a[i] - 1);
        update(1, 1, 60005 - 1, a[i]);
    }
    cout << ans;
}
    