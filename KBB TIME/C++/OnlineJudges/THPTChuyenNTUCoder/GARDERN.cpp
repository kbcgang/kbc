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
kien l, n, k, m, dem, a[1000000];
kien maxx, vtr, ans, b[Million];

bool ktr(kien mid)
{
    kien water = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < mid)
        {
            k = (mid - a[i]) / b[i];
            if ((mid - a[i]) % b[i] == 0)
            {
                water += k;
            }
            else
            {
                water += k + 1;
            }
        }
        if (water > l)
        {
            return false;
        }
    }
    return true;
}

kien tknp()
{
    kien l = 1, r = maxx;
    kien kq = -1 , mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            l = mid + 1;
            kq = mid;
        }
        else {
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
    cin >> n >> l;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        maxx = max(maxx, a[i] + b[i] * l);
    }
    cout << tknp();
}
