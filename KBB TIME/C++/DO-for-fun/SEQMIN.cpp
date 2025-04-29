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
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void sangNT()
{
    for (int i = 2; i <= Million; i++)
    {
        f[i] = 1;
    }
    for (int i = 2; i <= sqrt(Million); i++)
    {
        if (f[i] == 1)
        {
            f[i] = i;
            for (int j = i * i; j <= Million; j += i)
            {
                f[j] = i;
            }
        }
    }
}

kien ktr(kien n)
{
    int tpng = 0;
    while (n > 0)
    {
        tpng += f[n];
        n /= f[n];
    }
    return tpng;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << f[4] << " " << f[5] << "\n";
    sangNT();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ktr(a[i]) << " ";
    }


}
