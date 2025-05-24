/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, t, a[20];

bool ktr(kien s)
{
    while (s > 0)
    {
        if (s % 10 == 7)
        {
            return true;
        }
        s /= 10;
    }
    return false;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    a[0] = 0;
    for (int i = 1; i <= 18; i++)
    {
        a[i] = a[i - 1] * 10 + 9;
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i <= 18; i++)
        {
            kien tmp = n + a[i];
            if (ktr(tmp) == true)
            {
                cout << i << "\n";
                break;
            }
        }
    }
}

