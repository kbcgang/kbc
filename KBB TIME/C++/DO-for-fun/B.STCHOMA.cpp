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
kien n, k, m, dem, f[Million + 5], a[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n == 1 and k == 0)
        {
            cout << 0 << "\n";
        }
        if (n == k)
        {
            for (int i = 0; i < k; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                cout << i << " ";
            }
            for (int i = k + 1; i < n; i++)
            {
                cout << i << " ";
            }
            cout << k;
            cout << "\n";
        }
    }
    
}
