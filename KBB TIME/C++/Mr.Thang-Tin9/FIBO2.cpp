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
const kien inf = LLONG_MAX;
const kien mod = 1e9 + 7;
kien n;
kien f[100];
bool b[100];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[0] = f[1] = 1;
    for (int i = 2; i <= 90; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    while (cin >> n)
    {
        kien j = upper_bound(f, f + 90, n) - f;
        for (int i = j - 1; i >= 1; i--)
        {
            if (n == 0)
                break;
            if (f[i] <= n) 
            {
                b[i] = 1;
                n -= f[i];
            }
        }
        kien dem = 90;
        while (dem--)
        {
            for (int i = 3; i <= j; i++)
            {
                if (b[i])
                {
                    if (b[i - 1] == 0 && b[i - 2] == 0)
                    {
                        b[i] = 0;
                        b[i - 1] = b[i - 2] = 1;
                    }
                }
            }
        }
        for (int i = 1; i <= j; i++)
        {
            if (b[i] == 1)
            {
                cout << f[i] << " ";
            }
            b[i] = 0;
        }
        cout << "\n";
    }
}