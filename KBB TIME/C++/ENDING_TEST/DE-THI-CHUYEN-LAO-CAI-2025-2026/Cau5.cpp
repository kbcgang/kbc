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
kien n, k, m, dem, b[Million + 5];
kien maxx, minn, vtr, ans, l, r, f[1000000];
pair <kien, kien> a[Million];

bool cmp(pair <kien, kien> x, pair <kien, kien> y) {
    return x.second <= y.second;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].second;
        a[i].first = i;
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }
    b[m + 1] = LLONG_MAX;
    m += 1;
    sort (a + 1, a + 1 + n, cmp);
    sort (b + 1, b + 1 + m);    
    for (int i = 1; i <= m; i++) {
        f[i] = f[i-1] + b[i];
    }
    int i = 1, j = 1;
    kien k = a[1].second;
    while (i <= n and j <= m) {
        if (a[i].second >= b[j]) {
            a[i].second += b[j];
            j++;
        }
        else {
            a[i].second = k + f[j - 1];
            i++;
            k = a[i].second;
            a[i].second += f[j - 1];
        }
    }
    sort (a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        cout << a[i].second << " ";
    }
}
