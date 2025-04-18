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
kien n, k, m, dem, b[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r;

bool ktr(kien mid)
{
    kien dem = 0, vtr = 1;
    for (kien i = 1; i <= n; i++)
    {
        if (a[i] < mid)
        {
            for (kien j = vtr; j <= m; j++)
            {
                if (a[i] + b[j] >= mid)
                {
                    vtr = j + 1;
                    dem++;
                    break;
                }
            }
        }
        else
        {
            dem++;
        }
    }
    if (dem == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

kien tknp()
{
    kien l = 1, r = ans;
    kien mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            kq = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << kq;
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
        maxx = max(a[i], maxx);
    }
    cin >> m;
    for (kien i = 1; i <= m; i++)
    {
        cin >> b[i];
        ans = max(ans, maxx + b[i]);
    }
    tknp();
}