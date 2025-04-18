/// hãy làm sư tử, đừng làm nai.
/// hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define jav main
#define million 1000000
#define nt 10000000
#define mod 1000000007
kien n, k, m, dem, f[million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

bool check(int i, int n)
{
    int s = 0;
    for (int j = 1; j <= n; j++)
    {
        if ((i >> j) & 1  == 1)
        {
            s += a[j];
        }
    }
    if (s <= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

jav()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
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
