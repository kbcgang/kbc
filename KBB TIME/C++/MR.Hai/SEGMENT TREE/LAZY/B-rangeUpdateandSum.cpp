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
#define int long long
#define MOD 1000000007
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans, l, r;

struct KBB {
    kien sum, add, setval, mul;
    KBB () : sum(0), add(0), setval(-1) {};
};
KBB st[4 * 200005];

void push_down (int id, int l, int r) {
    int mid = (l + r) >> 1;
    int left = id << 1, right = id << 1 | 1;
    int lenleft = (mid - l + 1), lenright = (r - mid);

    if (st[id].setval == -1) {
        st[left].sum += st[id].add * lenleft;
        st[right].sum += st[id].add * lenright;
        st[left].add += st[id].add;
        st[right].add += st[id].add;
        st[id].add = 0;
    }
    else {
        st[left].sum = (st[id].setval + st[id].add) * lenleft;
        st[right].sum = (st[id].setval + st[id].add) * lenright;
        st[left].add = st[id].add;
        st[right].add = st[id].add;
        st[left].setval = st[id].setval;
        st[right].setval = st[id].setval;
        st[id].add = 0;
        st[id].setval = -1;
    }
}

void update (int id, int l, int r, int u, int v, int type, int val) {
    if (u > r or v < l) {
        return;
    }
    if (u <= l and r <= v) {
        if (type == 1) {
            st[id].add += val;
            st[id].sum += val * (r - l + 1);
            return;
        }
        if (type == 2) {
            st[id].sum = val * (r - l + 1);
            st[id].add = 0;
            st[id].setval = val;
            return;
        }
        return;
    }

    push_down (id, l , r);

    int mid = (l + r) >> 1;
    update (id << 1, l , mid, u ,v , type, val);
    update (id << 1 | 1, mid + 1, r , u ,v , type, val);

    st[id].sum = st[id << 1].sum + st[id << 1 | 1].sum;
}

int get (int id, int l, int r, int u, int v) {
    if (u > r or v < l) return 0;
    if (u <= l and r <= v) {
        return st[id].sum;
    }

    push_down (id, l , r);
    int mid = (l + r) >> 1;
    return (get(id << 1, l, mid, u ,v ) + get(id << 1 | 1, mid + 1, r, u , v));
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
        update (1 ,1 , n, i , i, 2 , a[i]);
    }
    kien t, x , y, val;
    while (q--) {
        cin >> t >> x >> y;
        if (t == 1) {
            cin >> val;
            update (1 ,1 ,n, x , y , t , val);
        }
        else if (t == 2) {
            cin >> val;
            update (1 ,1 ,n, x, y , t , val);
        }
        else {
            cout << get(1 ,1 , n, x ,y) << "\n";
        }
    }
}
