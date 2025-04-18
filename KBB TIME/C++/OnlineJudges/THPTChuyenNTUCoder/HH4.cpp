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
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

JAV()
{
    kien x_u, y_u, x_v, y_v;
    cin >> x_u >> y_u >> x_v >> y_v;

    kien ans = x_u * x_v + y_u * y_v;

    if (ans > 0)
    {
        cout << "NHON";
    }
    else if (ans == 0)
    {
        cout << "VUONG";
    }
    else
    {
        cout << "TU";
    }
    return 0;
}
