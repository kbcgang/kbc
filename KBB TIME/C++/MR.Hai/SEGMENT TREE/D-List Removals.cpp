/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmail.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
const int MAXN = 200000;
int n;
kien a[MAXN + 5];
vector<int> st;

void build(int id, int l, int r) {
    if (l == r) {
        st[id] = 1;
        return;
    }
    int mid = (l + r) >> 1;
    build(id*2,     l,   mid);
    build(id*2 + 1, mid+1, r);
    st[id] = st[id*2] + st[id*2 + 1];
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    int segSize = 1;
    while (segSize < n) segSize <<= 1;
    st.assign(segSize * 4, 0);
    build(1, 1, n);
    int p;
    for (int step = 1; step <= n; step++) {
        cin >> p;
        int id = 1, l = 1, r = n, k = p;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (st[id*2] >= k) {
                id = id*2;
                r = mid;
            } else {
                k -= st[id*2];
                id = id*2 + 1;
                l = mid + 1;
            }
        }
        cout << a[l] << (step < n ? ' ' : '\n');
        st[id] = 0;
        for (id >>= 1; id >= 1; id >>= 1) {
            st[id] = st[id*2] + st[id*2 + 1];
        }
    }

    return 0;
}

