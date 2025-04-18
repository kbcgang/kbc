/// Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
/// Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien n;
    cin >> n;
    kien a = 1, b = n;
    kien chunhat = 2 * (1 + n);
    for (kien i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            kien a = i;
            kien b = n / i;
            kien vuong = 2 * (a + b);
            if (vuong < chunhat)
            {
                chunhat = vuong;
                a = a;
                b = b;
            }
            else if (vuong == chunhat && abs(a - b) < abs(a - b))
            {
                a = a;
                b = b;
            }
        }
    }
    if (a > b) swap(a, b);
    cout << a << " " << b;
    return 0;
}
