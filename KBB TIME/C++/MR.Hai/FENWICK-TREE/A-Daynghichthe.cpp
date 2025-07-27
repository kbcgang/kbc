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
kien n, k, m, dem , a[1000000];
kien maxx, minn, vtr, ans, l, r;
int bit[60000 + 5];

void update (int pos, int x) {
    for (; pos <= 6e4; pos += pos & -pos) bit[pos] += x;
}

int get (int pos) {
    kien sum = 0;
    for (; pos > 0; pos -= pos & -pos) sum += bit[pos];
    return sum;
}

void solve() {
    maxx = 60000;
    for (int i = 1; i <= n; i++) {
        ans += get(maxx) - get(a[i]);
        update (a[i] + 1, 1);
    }
    cout << ans;
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
    solve();
}
