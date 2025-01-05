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
kien n, k, m, dem, a, b;
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> a >> b;
    if (a == 0 and b == 0)
    {
        if (n == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        return 0;
    }
    if (a == 0)
    {
        if (n % b == 0)
        {
            cout << "YES\n";
            cout << 0 << " " << n / b;
        }
        else
        {
            cout << "NO";
        }
        return 0;
    }
    if (b == 0)
    {
        if (n % a == 0)
        {
            cout << "YES\n";
            cout << n / a << " " << 0;
        }
        else
        {
            cout << "NO";
        }
        return 0;
    }
    for (int i = 0; i <= n / a; i++)
    {
        if (n - i * a >= 0 and (n - i * a) % b == 0)
        {
            cout << "YES\n";
            cout << i << " " << (n - i * a) / b;
            return 0;
        }
    }
    cout << "NO";
}