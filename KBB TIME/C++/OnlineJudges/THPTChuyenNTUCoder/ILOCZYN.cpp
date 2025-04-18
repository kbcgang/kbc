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
kien t;
kien k;

bool tich(kien x)
{
    kien s = sqrt(x);
    return (s * s == x);
}

bool fibo(kien n)
{
    return tich(5 * n * n + 4) || tich(5 * n * n - 4);
}

bool ILOCZYN(kien num)
{
    if (num == 0)
        return true;
    for (kien i = 1; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            kien j = num / i;
            if (fibo(i) && fibo(j))
            {
                return true;
            }
        }
    }
    return false;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> k;
        if (ILOCZYN(k))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
