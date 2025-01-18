/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

kien pp(kien a, kien b, kien &x, kien &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    kien x1, y1;
    kien gcd = pp(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

JAV()
{
    kien a, b, c;
    cin >> a >> b >> c;

    kien x, y;
    kien g = pp(a, b, x, y);
    if (c % g != 0)
    {
        cout << "no solution";
        return 0;
    }
    x *= c / g;
    y *= c / g;
    a /= g;
    b /= g;
    kien k1 = ceil(-1.0 * x / b);
    kien k2 = floor(1.0 * y / a);

    if (k1 > k2)
    {
        cout << "no solution";
        return 0;
    }
    kien k = k2;
    x = x + k * b;
    y = y - k * a;

    cout << x + y;
    return 0;
}
