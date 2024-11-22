/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t, a, b, x, y, n, a1, b1, x1, y2, n1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y >> n;
        a1 = a;
        b1 = b;
        x1 = x;
        y2 = y;
        n1 = n;
        a1 -= n1;
        if (x1 > a1)
        {
            a1+=n1;
            n1 -= a1 - x1;
            a1 = x1;
        }
        else n1=0;
        b1 -= n1;
        if (y2 > b1)
            b1 = y2;
        b -= n;
        if (y > b)
        {
            b+=n;
            n -= b - y;
            b = y;
        }
        else n=0;
        a -= n;
        if (x > a)
        {
            a = x;
        }
        cout << min(a * b, a1 * b1) << "\n";
    }
}