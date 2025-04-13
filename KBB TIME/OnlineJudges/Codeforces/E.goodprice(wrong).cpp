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
kien n, k, m, dem, a[1000000], b[1000000];
kien maxx, minn, vtr, ans;
kien t;

int ktr(int mid, int kt)
{
    kien tong = 0;
    kien dem  = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= mid)
        {
            tong += mid;
            dem++;
        }
        else if (mid > a[i] and mid <= b[i])
        {
            tong += mid;
            kt--;
            dem++;
        }
        if (kt < 0)
        {
            return false;
        }
    }
    if (kt >= 0)
    {
        return mid * dem;
    }
    else
    {
        return false;
    }
}

int tknp(int minn, int maxx)
{
    int l = minn, r = maxx;
    int mid, kq = -1;
    int ki = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        ki = ktr(mid, k);
        if (ki > 0) 
        {
            kq = max(kq, ki);
            l = mid + 1;
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
    cin >> t;
    while (t--)
    {
        minn = INT_MAX;
        maxx = INT_MIN;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            minn = min(minn, a[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            maxx = max(maxx, b[i]);
        }
        cout << tknp(minn, maxx) << "\n";
    }
    
}
