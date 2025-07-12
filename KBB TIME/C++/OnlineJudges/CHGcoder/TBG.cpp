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
kien x, y, z, ans, l, r, dp[1000000];

bool ktr(int mid)
{
    kien second = z;
    kien have = mid * y;
    while (have >= 0 and second > 0)
    {
        have += y;
        have -= x;
        if (have >= 0)
        second--;
    }
    if (second <= 0)
        return true;
    else
     return false;
}

int tknp()
{
    int l = 0, r = z * x / y;
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            r = mid - 1;
            kq = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return kq;
}

JAV()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x >> y >> z;
    cout << tknp();
    
}
