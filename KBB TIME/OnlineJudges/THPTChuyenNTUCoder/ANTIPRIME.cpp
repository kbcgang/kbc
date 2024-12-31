/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

kien d(kien x)
{
    kien c = 1;
    for (kien i = 2; i * i <= x; ++i)
    {
        int p = 0;
        while (x % i == 0)
            x /= i, ++p;
        c *= (p + 1);
    }
    if (x > 1)
        c *= 2;
    return c;
}

void f(kien cur, kien div, int idx, kien lim, kien &best, kien &maxd, const vector<int> &p)
{
    if (cur > lim)
        return;
    if (div > maxd || (div == maxd && cur < best))
        best = cur, maxd = div;
    kien nxt = cur;
    for (int i = 1; i <= 60; ++i)
    {
        if (nxt > lim / p[idx])
            break;
        nxt *= p[idx];
        f(nxt, div * (i + 1), idx + 1, lim, best, maxd, p);
    }
}

int JAV()
{
    kien n;
    cin >> n;
    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    kien best = 1, maxd = 1;
    f(1, 1, 0, n, best, maxd, p);
    cout << best << endl;
    return 0;
}
