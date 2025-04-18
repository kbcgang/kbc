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
kien lcm, ans, x, y, z;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z >> n;
        lcm = x * y / __gcd(x, y);
        lcm = lcm * z / __gcd(lcm, z);
        k = pow(10, n - 1);
        if (k % lcm == 0)
            cout << k << "\n";
        else
        {
            ans = lcm * (k / lcm + 1);
            if (ans > k * 10)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << ans << '\n';
            }
        }
    }   
}


