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

bool check(int i, int j)
{
    int l = i, r = j;
    int mid;
    int dau = i, cuoi = j;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if ((f[mid] - f[dau - 1]) == (f[cuoi] - f[mid]))
        {
            return true;
        }
        else if (f[mid] - f[dau - 1] < f[cuoi] - f[mid])
        {
            l = mid + 1;
        }
        else if (f[mid] - f[dau - 1] > f[cuoi] - f[mid])
        {
            r = mid - 1;
        }
    }
    return false;
}

int ktr()
{
    kien temp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + temp; j <= n; j++)
        {
            if ((f[j] - f[i-1]) % 2 == 0)
            {
                if (check(i , j))
                {
                    temp = max(temp, 1LL * (j - i + 1));
                }
            }
        }
    }
    return temp;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    cout << check(2 , 5) << "\n";
    cout << ktr();
}
