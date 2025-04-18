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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    int j = 1, i = 1;
    while (j <= n)
    {
        dem = j - i;
        if (f[j] - f[i - 1] > k)
        {
            i++;
        }
        else
        {
            if (i > j)
            {
                j++;
            }
            if (i == j)
            {
                ans += 1;
            }
            else
            {
                ans += 2;
                if (dem > 1)
                {
                    ans += dem - 1;
                }
            }
            j++;
        }
    }
    cout << ans;
}