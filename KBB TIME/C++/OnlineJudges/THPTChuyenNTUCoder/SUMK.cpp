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
kien n, k, m, dem, a[25];
kien maxx, minn, vtr, ans;

bool check(kien i, kien n)
{
    kien sum = 0;
    for (int j = 0; j < n; j++)
    {
        if ((i >> j) & 1 == 1)
        {
            sum += a[j];
        }
    }
    if (sum == k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < (1 << n); i++)
    {
        if (check(i, n))
        {
            ans++;
        }
    }
    cout << ans;
}
