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
kien n, k, m, dem, a, b;
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    if (b % a == 0) {
        ans = a + b;
        kien nh = a * b;
        for (kien i = a; i <= sqrt(nh); i += a) {
            if (nh % i == 0) {
                if (__gcd(i, nh / i) == a) ans = min(ans, i + nh / i);
            }
        }
        cout << ans;
    }
    else {
        cout << -1;
    }
}
