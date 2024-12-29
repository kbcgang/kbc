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
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

bool tknp(kien x)
{
    l = 1, r = n;
    kien mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == x)
        {
            kq = mid;
            return true;
        }
        else if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    kien t = 0;
    cin >> t;
    while (t--)
    {
        cin >> k;
        if (tknp(k) == true)
        {
            cout << "Y" << "\n";
        }
        else
        {
            cout << "N" << "\n";
        }
    }
}