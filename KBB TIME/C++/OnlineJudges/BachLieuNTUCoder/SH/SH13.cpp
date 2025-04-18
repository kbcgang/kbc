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

kien tonguoc(kien n)
{
    kien sum = 0;
    for (kien i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return sum;
}

JAV()
{
    kien n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << tonguoc(n) << endl;

    return 0;
}
