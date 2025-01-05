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
kien f[Million];

kien tknp(kien K)
{
    kien l = 0, r = 1e6;
    kien mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (f[mid] == K)
        {
            return mid;
        }
        else if (f[mid] < K)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    kien Q;
    cin >> Q;
    for (kien i = 0; i <= 1e6; i++)
    {
        f[i] = i * i * i - 2 * i + 5;
    }
    while (Q--)
    {
        kien K;
        cin >> K;
        cout << tknp(K) << "\n";
    }
}
