#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

kien n;

bool ktr(kien mid)
{
    kien m = n, vaysa = 0;
    while (m >= 10)
    {
        kien sweet = min(mid, m);
        vaysa += sweet;
        m -= sweet;

        kien petya = m / 10;
        m -= petya;
    }

    vaysa += m;

    return vaysa * 2 >= n;
}

kien tknp(kien n)
{
    kien l = 1, r = n, ans = n;
    while (l <= r)
    {
        kien mid = (l + r) / 2;
        if (ktr(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cout << tknp(n) << "\n";
}
