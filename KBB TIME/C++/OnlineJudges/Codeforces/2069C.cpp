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
#define MOD 998244353
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

kien power(kien base, kien exp) 
{
    kien result = 1;
    base = base % MOD;  
    while (exp > 0) {
        if (exp % 2 == 1)  
            result = (result * base) % MOD;
        exp = exp >> 1;  
        base = (base * base) % MOD;
    }
    return result;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                f[dem++] = i;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                l = i + 1;
                maxx = 0;
                while (l <= n)
                {   
                    if (a[l] == 2)
                    {
                        maxx++;
                    }
                    else if (a[l] == 3)
                    {
                        vtr = pow(2, maxx);
                        vtr %= MOD;
                        ans = (ans + (vtr - 1));
                    }
                    l++;
                }
                l = 0;
            }
        }
        cout << ans << '\n';
        maxx = 0;
        ans = 0;
    }
    
}
