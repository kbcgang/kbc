/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 10000005
#define NT 10000000
#define MOD 1000000007
using namespace std;
kien n, a[Million],i;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i < 100; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        if (a[i] > n)
        {
            break;
        }
    }
    while (n > 0)
    {
        for (i; i >= 0; i--)
        {
            if (a[i] <= n and a[i] != 0)
            {
                cout << a[i] << ' ';
                n = n - a[i];
            }
        }
    }
}