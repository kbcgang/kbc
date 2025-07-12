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
kien n, k, l ,r, maxx , minn, f[Million], a[Million];
kien q, ans, vtr;
vector<vector<kien>> st;

void build(int id, int l, int r)
{
    if(l == r) {
        st[id] = { a[l] };
    }
    else {
        int mid = (l + r) >> 1;
        build(id << 1, l, mid);
        build(id << 1 | 1, mid + 1, r);
        auto &u = st[id << 1], &v = st[id << 1 | 1];
        vector<kien> tmp(u.size() + v.size());
        merge(u.begin(), u.end(), v.begin(), v.end(), tmp.begin());
        st[id] = move(tmp);
    }
}

int query(int id, int l, int r, int u, int v, kien k)
{
    if(r < u || v < l) return 0;
    if(u <= l && r <= v)
    {
        auto it = upper_bound(st[id].begin(), st[id].end(), k);
        return st[id].end() - it;
    }
    int mid = (l + r) >> 1;
    return query(id << 1,   l,   mid, u, v, k)
           + query(id << 1 | 1, mid + 1, r, u, v, k);
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> q;
    st.assign(4 * n + 5, {});
    build(1, 1, n);
    while(q--)
    {
        cin >> l >> r >> k;
        cout << query(1, 1, n, l, r, k) << "\n";
    }
    return 0;
}
