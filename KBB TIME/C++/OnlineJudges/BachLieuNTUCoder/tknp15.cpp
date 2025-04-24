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
kien n, k, m, dem, a[10000000];
kien maxx, minn, vtr, ans, l, r;

bool ktr(kien mid, kien b[])
{
    kien point = n - 1;
    for (int i = 1; i <= n; i++)
    {
        if (i != mid)
        {
            b[i] += point;
            point--;
        }
        else
        {
            b[i] += n;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[mid] < b[i])
        {
            return false;
        }
    }
    return true;
}

kien tknp()
{
    kien l = 0, r = n;
    kien mid, kq = n;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid, a))
        {
            r = mid - 1;
            kq = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return n - kq + 1;
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
    }
    sort (a + 1, a + 1 + n);
    cout << tknp(); 
}
