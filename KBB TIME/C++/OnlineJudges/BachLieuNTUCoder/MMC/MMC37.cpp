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
kien n, k, m, dem, f[1000000], a[Million];
kien maxx, minn, vtr;

JAV()
{
    kien N, X;
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (a[i] == X)
        {
            cout << i + 1 << "\n";
            return 0;
        }
    }

    cout << "NO" << "\n";
    return 0;
}
