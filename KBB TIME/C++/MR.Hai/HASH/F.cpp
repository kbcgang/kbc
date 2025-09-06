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
const int base = 257;
kien pow1[1000005];
kien xuoi[1000005], nguoc[1000005];

struct KBB {
    kien cur, hash1, hash2;
    void upd() {
        swap(hash1, hash2);
    }
};
KBB st[4 * Million + 5];
int lazy[4 * Million + 5];
int n;

kien gethash1(int l, int r) {
    if (l > r) return 0;
    return ( (xuoi[r] - (xuoi[l - 1] * pow1[r - l + 1]) % MOD) + MOD ) % MOD;
}

kien gethash2(int l, int r) {
    if (l > r) return 0;
    return ( (nguoc[r] - (nguoc[l - 1] * pow1[r - l + 1]) % MOD) + MOD ) % MOD;
}

void build(int id, int l, int r) {
    lazy[id] = 0;
    if (l == r) {
        st[id].cur = 1;
        st[id].hash1 = gethash1(l, l);
        st[id].hash2 = gethash2(l, l);
        return;
    }
    int mid = (l + r) >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
    st[id].cur = st[id << 1].cur + st[id << 1 | 1].cur;
    st[id].hash1 = ( (st[id << 1].hash1 * pow1[st[id << 1 | 1].cur]) % MOD + st[id << 1 | 1].hash1 ) % MOD;
    st[id].hash2 = ( (st[id << 1].hash2 * pow1[st[id << 1 | 1].cur]) % MOD + st[id << 1 | 1].hash2 ) % MOD;
}

void push(int id) {
    if (lazy[id] == false) return;
    int u = id << 1, v = id << 1 | 1;
    lazy[id] = 0;
    lazy[u] ^= 1;
    lazy[v] ^= 1;
    st[u].upd();
    st[v].upd();
}

void update(int id, int l, int r, int u, int v) {
    if (r < u or l > v) return;
    if (u <= l and r <= v) {
        lazy[id] ^= 1;
        st[id].upd();
        return;
    }
    if (lazy[id]) push(id);
    int mid = (l + r) >> 1;
    update(id << 1, l, mid, u, v);
    update(id << 1 | 1, mid + 1, r, u, v);
    st[id].cur = st[id << 1].cur + st[id << 1 | 1].cur;
    st[id].hash1 = ((st[id << 1].hash1 * pow1[st[id << 1 | 1].cur]) % MOD + st[id << 1 | 1].hash1) % MOD;
    st[id].hash2 = ((st[id << 1].hash2 * pow1[st[id << 1 | 1].cur]) % MOD + st[id << 1 | 1].hash2) % MOD;
}

KBB them(const KBB &L, const KBB &R) {
    KBB ans;
    ans.hash1 = ((L.hash1 * pow1[R.cur]) % MOD + R.hash1) % MOD;
    ans.hash2 = ((L.hash2 * pow1[R.cur]) % MOD + R.hash2) % MOD;
    ans.cur = L.cur + R.cur;
    return ans;
}

KBB get(int id, int l, int r, int u, int v) {
    if (r < u or l > v) return KBB{0, 0, 0};
    if (u <= l and r <= v) return st[id];
    if (lazy[id]) push(id);
    int mid = (l + r) >> 1;
    KBB left = get(id << 1, l, mid, u, v);
    KBB right = get(id << 1 | 1, mid + 1, r, u, v);
    return them(left, right);
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    s = ' ' + s; 
    n = s.size() - 1;
    pow1[0] = 1;
    for (int i = 1; i <= n; ++i) {
    	pow1[i] = (pow1[i - 1] * base) % MOD;
    }
    xuoi[0] = 0; nguoc[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int val = s[i] - '0';
        int inv = 1 - val; 
        if (inv < 0) inv += MOD;
        xuoi[i] = ( (xuoi[i - 1] * base) % MOD + val ) % MOD;
        nguoc[i] = ( (nguoc[i - 1] * base) % MOD + inv ) % MOD;
    }
    build(1, 1, n);
    int q;
    cin >> q;
    int type,x, y, z, t;
    while (q--) {
        cin >> type;
        if (type == 1) {
            int L, R;
            cin >> L >> R;
            update(1, 1, n, L, R);
        } 
        else {
            cin >> x >> y >> z >> t;
            if (y - x != t - z) {
                cout << "NO\n";
                continue;
            }
            if (get(1, 1, n, x, y).hash1 == get(1, 1, n, z, t).hash1) {
            	cout << "YES\n";
            }
            else { 
            	cout << "NO\n";
            }
        }
    }
}
