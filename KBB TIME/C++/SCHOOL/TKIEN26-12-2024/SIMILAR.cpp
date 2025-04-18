/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million];
kien maxx, minn, vtr[NT], ans, l, r;

int tong(kien x)
{
    kien sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

JAV()
{
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        k = tong(i);
        f[k]++;
        if (f[k] == 1)
        {
            vtr[k] = i;
        }
        else
        {
            ans = max(ans, i - vtr[k]);
        }
    }
    cout << ans;
}