///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

JAV()
{
    cin >> n;
    kien a[n];
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (kien i = 0; i < n - 1; i++)
    {
        for (kien j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                kien temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (kien i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
