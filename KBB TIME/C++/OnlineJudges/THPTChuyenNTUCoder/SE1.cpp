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
int n, k, a[Million];
int maxx[Million], minn[Million][2], vtr, ans, dp[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    minn[0][0] = INT_MAX;
    minn[0][1] = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx[i] = max(maxx[i - 1], a[i]);

        minn[i][0] = minn[i - 1][0];
        minn[i][1] = minn[i - 1][1];
        if (minn[i - 1][0] > a[i])
        {
            minn[i][0] = a[i];
            minn[i][1] = i;
        }
    }

    dp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > maxx[i - 1])
        {
            dp[i] = i - 1;
        }
        else
        {
            if (a[i] > minn[i - 1][0])
            {
                dp[i] = i - minn[i - 1][1];
                vtr = minn[i - 1][1];
                while (vtr > 1 && minn[vtr - 1][0] < a[i])
                {
                    dp[i] = i - minn[vtr - 1][1];
                    vtr = minn[vtr - 1][1];
                }
            }
            else
            {
                dp[i] = 0;
            }
        }
    }
    ans = *max_element(dp + 1, dp + 1 + n);
    if (ans == 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << ans << "\n";
    }
}
