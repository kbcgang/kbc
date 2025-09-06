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
kien n, k, m, dem, b[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--) {
        cin >> n;
        ans = 0;
        a[0] = INT_MAX;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] > a[i-1]) {
                ans = -1;
            }
        }
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        for (int i = n - 1; i >= 1; i--) {
            if (b[i] > b[i+1]) {
                ans = -1;
            }
        }
        if (a[n] != b[1] or ans == -1) {
            cout << "NO\n";
        }
        else {
            for (int i = 2; i <= n; i++) {
                if (__gcd(a[i- 1], a[i] / __gcd(a[i], b[i]) * b[i]) != a[i]) {
                    cout << "NO\n";
                    ans = -1;
                    break;
                }
            }
            if (ans != -1) {
                for (int i = n - 1; i >= 1; i--) {
                    if (__gcd(b[i] / __gcd(a[i], b[i]) * a[i], b[i+1]) != b[i]) {
                        cout << "NO\n";
                        ans = -1;
                        break;
                    }
                }
            }
            if (ans != -1) {
                cout << "YES\n";
            }
        }
    }    
}
