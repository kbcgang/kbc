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
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans;

bool ktr(kien mid)
{
    kien sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= mid)
        {
            sum += a[i] / mid;
        }
        if (sum >= k)
        {
            return true;
        }
    }
    if (sum >= k)
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
    kien l = 1, r = maxx;
    kien mid, kq = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            l = mid + 1;
            kq = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    cout << tknp();
    return 0;
}