/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[NT + 5];
kien maxx, minn, vtr, ans, l, r, dp[NT + 5];

void sang()
{
    for (int i = 2; i <= sqrt(NT); i++)
    {
        if (f[i] == 0)
        {
            f[i] = 1;
            for (int j = i * 2; j <= NT; j += i)
            {
                f[j]++;
            }
        }
    }
}

int dao(int x)
{
    int k = 0;
    for (; x > 0; x /= 10)
    {
        k = 10 * k + x % 10;
    }
    return (k);
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sang();
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (f[i] >= 3)
        {
            if (dao(i) == i)
            {
                ans++;
            }
        }
    }
    cout << ans;
}