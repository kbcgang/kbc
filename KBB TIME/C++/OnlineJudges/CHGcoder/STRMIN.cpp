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
    cin >> n;
    int x, y, z;
    cin >> x >> y >> z;
    if (x + y + z < n)
    {
        z = n - x - y;
    }
    for (int i = 1; i <= z; i++)
    {
        if (i % 2 == 1)
            cout << 0;
        else
         cout << 1;
    }
    for (int i = 1; i <= y; i++)
    {
        if (i % 2 == 1)
            cout << 'A';
        else
         cout << 'B';
    }
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 1)
            cout << 'a';
        else
         cout << 'b';
    }
}
