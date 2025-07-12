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

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n * m; i++)
    {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + (n * m));
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << a[m * (i - 1) + j] << " ";
            }
            cout << "\n";
        }
        else {
            vtr = m;
            for (int j = 1; j <= m; j++)
            {
                cout << a[m * (i - 1) + vtr] << " ";
                vtr--;
            }
            cout << "\n";
        }
    }
}
