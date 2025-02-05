/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> l >> r;
    for (kien i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i >= l and i <= r)
            {
                dem++;
                // if (dem == 1)
                // {
                //     maxx = i;
                //     minn = i;
                // }
                // else
                // {
                //     maxx = max(maxx, i);
                //     minn = min(minn, i);
                // }
            }
            if ((n / i) >= l and (n / i) <= r)
            {
                dem++;
                // if (dem == 1)
                // {
                //     maxx = n / i;
                //     minn = n / i;
                // }
                // else
                // {
                //     maxx = max(maxx, n / i);
                //     minn = min(minn, n / i);
                // }
                if (n / i == i)
                    dem--;
            }
        }
    }
    cout << dem;
}