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
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= (n - (k*5) + 1); i++)
    {
        dem = 0;
        for (int j = i; j <= i + (k*5) - 1; j++)
        {
            dem++;
            if (dem <= 5)
            {
                if (dem % 2 == 0)
                {
                    dp[i] += -dem*a[j];
                }
                else
                {
                    dp[i] += dem*a[j];
                }
            }
            else
            {
                dem = 0;
            }
        }
        cout << dp[i] << " ";
    }
    cout << *max_element(dp + 1, dp + n);
}

/// 2 + (-2 * 3) + (3 * -3) + (-4 * -2) + (5 * -1)
/// 2 - 6 - 9 + 8 - 5 = -10
/// 1 + -4 + 9 + 12 + -5 = 13