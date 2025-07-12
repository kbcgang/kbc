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
kien n, k, m, dem, f[Million + 5], a, b, c, d;
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void sangNT()
{
    f[1] = f[0] = 1;
    for (int i = 2; i <= sqrt(1000); i++)
    {
        if (f[i] == 0)
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                f[j] = 1;
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        for (int i = a; i <= b; i++)
        {
            for (int j = c; j <= d; j++)
            {
                if (f[i + j] == 0)
                {
                    vtr = 1;
                    break;
                }
            }
            if (vtr == 0)
            {
                cout << "TAM\n";
                ans = 1;
            }
            vtr = 0;
        }
        if (ans == 0)
        {
            cout << "CAM\n";
        }
        ans = 0;
        vtr = 0;
    }
    
}
