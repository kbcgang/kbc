/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmail.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien ans, l, r, dem, f[Million];
kien n, chan, le, a[1000000], S;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
        S += a[i];
        if (a[i] % 2 == 0)
        {
            chan++;
        }
        else
        {
            le++;
        }
    }
    if (S % 2 == 0)
    {
        ans = (chan * (chan - 1)) / 2 + (le * (le - 1)) / 2;
        cout << ans;
    }
    else
    {
        ans = chan * le;
        cout << ans;
    }
}
