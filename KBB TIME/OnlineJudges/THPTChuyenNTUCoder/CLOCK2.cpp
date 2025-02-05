/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien h1, m1, h2, m2;
    cin >> h1 >> m1;
    cin >> h2 >> m2;
    if (m1 <= 30)
    {
        ans = 1;
    }
    else
    {
        ans = 0;
    }
    if (m1 == 0)
    {
        ans += (h1 == 0 ? 12 : h1 % 12);
    }
    ans += (h2 - h1 - 1) * 1;
    for (kien h = h1 + 1; h <= h2; ++h)
    {
        ans += (h == 0 ? 12 : h % 12);
    }
    if (m2 >= 30)
    {
        ans++;
    }
    cout << ans;
}
