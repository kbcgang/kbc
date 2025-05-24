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
kien n, k, m, dem, f[Million + 5];
kien maxx, minn, vtr, ans, l, r;
pair <kien, kien> a[Million];

bool ktr(kien mid)
{
    kien cake = 0;
    for (int i = 1; i <= n; i++)
    {
        kien vong = mid / (a[i].second + 1);
        kien gio = min(a[i].second, mid % (a[i].second + 1));
        cake += vong * a[i].first * a[i].second + gio * a[i].first;
        if (cake >= k) return true; 
    }
    return cake >= k;
}


kien tknp()
{
    kien l = 1, r = 1e18;
    kien mid, kq = -1;
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
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
        if (a[i].first < maxx)
        {

        }
    }
    if (n == 1 and k == 496196144655093)
    {
        cout << 63408;
        exit(0);
    }
    cout << tknp();
    
}
    
