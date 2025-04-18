/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, a[100005];
kien maxx, minn, vtr, ans, l, r, sum;

bool robot(kien mid)
{
    kien tong_robot = 0;
    for (int i = 1; i <= m; i++)
    {
        tong_robot += (a[i] + mid - 1) / mid;
        if (tong_robot > n)
        {
            return false;
        }
    }
    return true;
}

kien tknp(kien maxx, kien sum)
{
    kien l = 1, r = maxx, ans = 0;
    kien mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (robot(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
        sum += a[i];
    }
    tknp(maxx, sum);
}

