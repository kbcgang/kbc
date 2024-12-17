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
kien n, a[1000000], ans = 0;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (kien k = 1; k <= n / 2; k++)
    {
        bool dem = true;
        for (kien i = 1; i + k <= n; i++)
        {
            if (a[i] != a[i + k])
            {
                dem = false;
                break;
            }
        }
        if (dem)
        {
            ans = k;
        }
    }
    cout << ans;
}