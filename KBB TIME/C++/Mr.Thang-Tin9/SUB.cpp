/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .。. o(≧○≦)o .。.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, a[NT], p, q, dem;

JAV()
{
    cin >> n >> p >> q;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] = a[i - 1] + a[i];
    }

    kien dau = 1, cuoi = 1;
    for (kien i = 1; i <= n; i++)
    {
        while (dau <= n && a[dau] - a[i - 1] < p)
        {
            dau++;
        }
        while (cuoi <= n && a[cuoi] - a[i - 1] <= q)
        {
            cuoi++;
        }
        if (dau <= cuoi)
        {
            dem += (cuoi - dau);
        }
    }

    cout << dem;
}
