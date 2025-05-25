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
kien n, x, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, t, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (x % 2 == 0) a[dem++] = x;
            else f[vtr++] = x;
        }
        sort (a, a + dem);
        for (int i = 0; i < dem; i++)
        {
            cout << a[i] << " ";
        }
        sort (f, f + vtr);
        for (int i = 0; i < vtr; i++)
        {
            cout << f[i] << " ";
        }
        dem = 0;
        vtr = 0;
        cout << "\n";
    }
}
