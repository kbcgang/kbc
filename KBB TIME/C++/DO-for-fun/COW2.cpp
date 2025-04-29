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

bool ktr(int mid)
{
    int dis = a[1];
    int tong = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - dis >= mid)
        {
            tong++;
            dis = a[i];
        }
    }
    return tong >= k;
}

int tknp()
{
    int l = 1, r = maxx;
    int kq = -1, mid;
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
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    sort(a + 1, a + 1 + n);
    cout << tknp();   
}
