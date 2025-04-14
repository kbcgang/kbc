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
kien n, k, m, dem, ans, a[1000000];

bool ktr(int i, int mid)
{
    int s = 0;
    int dem = 0;
    int s1 = 0;
    for (int j = 0; j < n; j++)
    {
        if (((i >> j) & 1) == 1)
        {
            s1++;
        }
        else
        {
            s++;
        }
        if (((i >> j) & 1) == 1 and ((i >> (j + 1)) & 1) == 1)
        {
            dem = 1;
        }
    }
    if (s == s1)
    {
        return true;
    }
    else if (dem == 0)
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
    kien t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n;
        cin >> m;
        for (int i = 0; i < (1 << n); i++)
        {
            if (ktr(i, n))
            {
                ans++;
            }
        }
        cout << ans % m << "\n";
    }
}
