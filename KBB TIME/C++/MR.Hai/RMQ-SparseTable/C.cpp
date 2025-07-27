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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];
kien st[20][Million];
unordered_map <int, int> pp;

void table() {
    for (int i = 1; i <= n; i++) {
        st[0][i] = a[i];
    }
    for (int j = 1; j <= __lg(n); j++) {
        for (int i = 1; i + (1 << j) - 1 <= n; j++) {
            st[j][i] = __gcd(st[j - 1][i], st[j - 1][i + (1 << (j - 1))]);
            pp[st[j][i]]++;
        }
    }
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
    table();
    kien q, x;
    cin >> q;
    while (q--) {
        cin >> x;
        cout << pp[x] << "\n";
    }
    
}
